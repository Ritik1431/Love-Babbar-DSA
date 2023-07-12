#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insertInEnd(Node * head, int d)
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
    // temp->next = NULL;
    return head;

}
Node * insertAtPos(Node * &head,int d,int pos)
{
    Node * temp = new Node(d);

    // corner case
    if(pos==1)
    {
        temp->next = head;
        return temp;
    }
    Node * curr = head;
    for(int i = 1; i <= pos-2 && curr!=NULL; i++)
    {
        curr = curr->next;
    }

    if(curr==NULL)   // when input is beyond size 
    return head;


    temp->next = curr->next;
    curr->next = temp;
    return head;
}
Node * deleteFirstElement(Node * &head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else{
        Node * temp = head->next;
        delete head;
        return temp;
    }
}
Node * deleteLastElement(Node * &head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node * curr = head;
        while(curr->next->next!=NULL)
        {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = NULL;
        return head;
    }
}
void printll(Node * head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    printll(head->next);
}
int main()
{
    Node * head = NULL;
    head = insertInEnd(head,10);
    head = insertInEnd(head,20);
    head = insertInEnd(head,30);
    // printll(head);
    // head = insertAtPos(head,15,4);
    // head = deleteFirstElement(head);
    head = deleteLastElement(head);
    printll(head);
    return 0;
}