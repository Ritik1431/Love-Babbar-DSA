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
Node *insertInBegning(Node * head, int d)
{
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
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
    head = insertInBegning(head,10);
    head = insertInBegning(head,20);
    head = insertInBegning(head,30);
    printll(head);
    return 0;
}