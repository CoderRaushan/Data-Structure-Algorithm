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
Node* ReverseLinkedList(Node *head)
{
    Node* curr=head;
    Node* nextNode=head->next->next;
    int cnt=0;
    while (nextNode != NULL)
    {
        nextNode->next=curr;
        if(cnt==0)
        {
            curr->next=NULL;
        }
        cnt++;
        curr=curr->next;
        nextNode=nextNode->next;
    }
    return nextNode;
}
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
    cout<<ReverseLinkedList(head)->val;
    return 0;
}