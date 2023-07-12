#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
    // simple print

// void printll(Node * head)
// {
//     Node * curr = head;
//     while(curr!=NULL)
//     {
//         cout<<curr->data<<" ";
//         curr = curr->next;
//     }
// }

        // recursively calling

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
    Node * head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printll(head);
    return 0;
}