#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * prev = NULL;
    Node * next = NULL;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
Node * insertBegining(Node * head,int d)
{
    Node * temp = new Node(d);
    temp->next = head;
    if(head!=NULL)
    {
        head->prev = temp;
        // head = temp;
    }
    return temp;
   
}
Node * insertLast(Node * head,int d)
{
    Node * temp = new Node(d);
    if(head==NULL)
    {
        return temp;
    }
    Node * curr = head;
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
    
}
void print(Node * head)
{
    Node * curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main()
{
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = insertBegining(head,5);
    head = insertLast(head,45);
    print(head);


    
    return 0;
}