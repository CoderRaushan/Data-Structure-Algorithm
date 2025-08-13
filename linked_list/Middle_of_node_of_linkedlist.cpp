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
Node* MiddleOfLinkedListForOdd(Node *temp)
{
    Node* slow=temp;
    Node* fast=temp;
    while (fast->next!= NULL)
    { 
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;    
}
Node* MiddleOfLinkedListForEven(Node *temp)
{
    Node* slow=temp;
    Node* fast=temp;
    while (fast!= NULL)
    { 
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;    
}
Node* MiddleOfLinkedListForEvenAndOddForBoth(Node *temp)
{
    Node* slow=temp;
    Node* fast=temp;
    while (fast && fast->next)
    { 
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;    
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
    // cout<<MiddleOfLinkedListForOdd(head)->val;
    cout<<endl;
    // cout<<MiddleOfLinkedListForEven(head)->val;
    cout<<endl;
    cout<<MiddleOfLinkedListForEvenAndOddForBoth(head)->val;
    return 0;
}