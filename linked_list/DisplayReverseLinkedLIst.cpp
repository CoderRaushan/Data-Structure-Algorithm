#include <iostream>
using namespace std;

// 1->2->3->4->5->6
class Node
{
public:
    int val;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
    }
    Node(int val, Node *next)
    {
        this->val = val;
        this->next = next;
    }
};
void display(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
Node* ReverseLinkedList(Node *head)
{
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL)
    {
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
};
int main()
{
    // creating node
    Node *head = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    // connection of nodes
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    cout<<"Before reverse"<<endl;
    display(head);
    cout<<endl;
    cout<<"After reverse"<<endl;
    display(ReverseLinkedList(head));
    return 0;
}   