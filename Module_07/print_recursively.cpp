#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void print_Recursively(Node *head)
{
    if (head == NULL)
        return;
    cout << head->value << " ";
    print_Recursively(head->next);
    // cout << head->value << " "; // It's print recursively
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_Recursively(head);

    return 0;
}