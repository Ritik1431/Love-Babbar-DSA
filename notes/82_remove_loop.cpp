#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void detectRemoveLoop(Node* head) 
{ 
    Node *slow = head, *fast = head; 
  

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow!=fast)
    {
        return;
    }
    slow = head;
    while(slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    fast->next = NULL;

}
void printList(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	detectRemoveLoop(head); 
    printList(head);
	return 0;
} 
