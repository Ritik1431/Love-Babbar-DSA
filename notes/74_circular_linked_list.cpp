#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next = NULL;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
Node * printll(Node * head)
{
    if(head==NULL)
    {
        return NULL;
    }
    cout<<head->data<<" ";
    for(Node * p = head->next;p!=head;p = p->next)
    {
        cout<<p->data<<" ";
    }
    
}
// Node * insertInBegning(Node * head, int d)
// {
//     Node * temp = new Node(d);
//     if(head==NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }
//     else
//     {
//         Node * curr = head;
//         while(curr->next!=head)
//         {
//             curr = curr->next;
//         }
//             curr->next = temp;
//             temp->next = head;
//             head = temp;
//     }
//     return head;
// }

//  effective way 

// Node * insertInBegning(Node * head, int d)
// {
//     Node * temp = new Node(d);
//     if(head==NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }
//     else
//     {
//         temp->next = head->next;
//         head->next = temp;                  // In this we are inserting element at second position and then swaping its data with head
//         int t = head->data;
//         head->data = temp->data;
//         temp->data = t;
//     }
//     return head;
// }

// Node * insertAtLast(Node * head,int d)
// {
//     Node * temp = new Node(d);
//     if(head==NULL)
//     {
//         temp->next = temp;
//         head = temp;
//         return head;
//     }
//     else
//     {
//         Node * curr = head;
//         while(curr->next!=head)
//         {
//             curr = curr->next;
//         }
//         curr->next = temp;
//         temp->next = head;
//     }
//     return head;
// }
// Node * insertAtLast(Node * head , int d)
// {
//     if(head==NULL)
//     {
//         head->next = head;
//         return head;
//     }
//     Node * temp = new Node(d);
//     temp->next = head->next;
//     head->next = temp;
//     head = temp->next;
//     return head;
// }
Node * deleteheadNode(Node * head)
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
    Node * temp;
    // either you can use while loop and then do it or you can do like this if u want it should be done in O(1) time
    head->data = head->next->data;
    temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;

}
Node * DeleteAtPos(Node * head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(k==1)
    {
        return deleteheadNode(head);
    }
    Node * curr = head;
    for(int i = 0 ; i< k-2;i++)
    {
        curr = curr->next;
    }
    Node * temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}
int main()
{
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    Node * temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = head;
    // head = insertInBegning(head,15);
    // head = insertAtLast(head,65);
    // head = deleteheadNode(head);
    head = DeleteAtPos(head,3);
    printll(head);
    return 0;
}