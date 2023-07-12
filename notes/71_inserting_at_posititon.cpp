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
    printll(head);
    return 0;
}