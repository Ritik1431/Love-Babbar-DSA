#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node *prev;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}
Node * sortedinsert(Node * head , int d)
{
    Node * temp = new Node(d);

    if(head==NULL)
    {
        return temp;
    }
    if(d<head->data)
    {
        temp->next = head;
        return temp;
    }

    Node * curr = head;
    while(curr!=NULL && curr->next->data < d)
    {
        curr = curr->next;
    }
        temp->next = curr->next;
        curr->next = temp;
        return head;
}
void printMiddle(Node * head){
    if(head==NULL)return;
    Node *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
// void printNthFromEnd(Node * head,int n){
//     int len=0;
//     for(Node *curr=head;curr!=NULL;curr=curr->next)
//         len++;
//     if(len<n)
//         return;
//     Node *curr=head;
//     for(int i=1;i<len-n+1;i++)
//         curr=curr->next;
//     cout<<(curr->data)<<" ";
// }

// Efficient solution

void printNthFromEnd(Node * head,int n){
    if(head==NULL)return;
    Node *first=head;
    for(int i=0;i<n;i++){
        if(first==NULL)return;   // if length of ll is smaller than given input
        first=first->next;
    }
    Node *second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<(second->data);
}
int main()
{
   	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
    // head = sortedinsert(head,25);
    // printlist(head);
    printMiddle(head);

    return 0;
}