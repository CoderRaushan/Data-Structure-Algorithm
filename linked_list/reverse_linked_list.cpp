// Node* reverseLinkedList(Node *head)
// {
//       Node *temp=head;
//       Node *prev=NULL;
//    while(temp!=NULL)
//    {    Node*front=temp->next;
//         temp->next=prev;
//         prev=temp;
//         temp=front;
//    }
//    return prev;
        
// }


// basics of linedlist
#include<iostream>
using namespace std; 
class Node 
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        next=NULL;
    }
};
void display(Node * head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void ReverseDisplay(Node * temp)
{
    if(temp==NULL)return ;
    ReverseDisplay(temp->next);
    cout<<temp->val<<" ";
}
int main()
{
//     //node creation
//   Node *head=new Node(4);
//   Node *b=new Node(3);
//   Node *c=new Node(5);
//   Node *d=new Node(6);
//   Node *e=new Node(7);
// //node connection   
//     head->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     display(head);
//     cout<<endl;
//     ReverseDisplay(head);

    return 0;
}