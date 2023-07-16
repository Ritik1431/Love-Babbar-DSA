#include <bits/stdc++.h>
using namespace std;
struct Node
{
    
    int data;
    Node* next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// Node * reverse(Node * head )
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//         Node * prev = NULL;
//         Node * curr = head;

//         while(curr!=NULL)
//         {
//             prev = curr->prev;
//             curr->prev = curr->next;
//             curr->next = prev;
//             curr = curr->prev;
//         }
//         return prev->prev;
//     }
// }
// Node * deletefirstnode(Node * head)
// {
//     if(head==NULL || head->next == NULL)
//     {
//         return NULL;
//     }
//     else{
//         Node * temp = head;
//         head = head->next;
//         head->prev = NULL;
//         delete temp;
//         return head;
//     }
// }
// Node * deletelastnode(Node * head)
// {
//     if(head==NULL )
//     {
//         return NULL;
//     }
//     if(head->next == NULL)
//     {
//         delete head;
//         return NULL;
//     }
//     else
//     {
//         Node * curr = head;
//         while(curr->next != NULL)
//         {
//             curr = curr->next;
//         }
//         curr->prev->next  = NULL;
//         delete curr;
//         return head;
//     }
// }

// void print(Node * head)
// {
//     Node * curr = head;
//     while(curr!=NULL)
//     {
//         cout<<curr->data<<" ";
//         curr = curr->next;
//     }
// }

int main()
{
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    Node * temp3 = new Node(40);
    head->next = temp1;
    // temp1->prev = head;
    temp1->next = temp2;
    // temp2->prev = temp1;
    temp2->next = temp3;
    // temp3->prev = temp2;
    temp3->next = head;
     // head = reverse(head);
    // head = deletefirstnode(head);
    // head = deletelastnode(head);
    // print(head);
    

    
    return 0;
}