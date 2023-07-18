#include <bits/stdc++.h>
using namespace std;

// Linked list Node
struct Node {
	int data;
	Node* next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

Node* push(Node* head, int new_data)
{
	Node* new_node = new Node(new_data);
	new_node->next = head;
	head = new_node;
	return head;
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
Node * reverse(Node * head ,int  k)
{
    Node * curr = head , *prevFirst = NULL;
    bool isFirstPass = true;
    while(curr!=NULL)
    {
        Node * first = curr, *prev = NULL;
        int count = 0;
        while(curr!=NULL && count<k)
        {
            Node * next = curr->next;
            curr->next =prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(isFirstPass)
        {
            head = prev;
            isFirstPass = false;
        }
        else
        {
            prevFirst->next = prev;
        }
        prevFirst = first;
    }
    return head;
}

int main()
{
	Node* llist = NULL;
	llist = push(llist, 25);
	llist = push(llist, 14);
	llist = push(llist, 13);
	llist = push(llist, 12);
	llist = push(llist, 11);
	llist = push(llist, 10);
	cout << ("List before reversal of duplicates\n");
	printList(llist);
	cout << ("List after removal of elements\n");
	llist = reverse(llist,3);
	printList(llist);
}
