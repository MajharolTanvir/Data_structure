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

void insert(Node *head, int pos, int value) // O(n) complexity
{
    Node *newNode = new Node(value);
    
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int size(Node *head) // O(n) complexity
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void print_linked_list(Node *head) // o(n) complexity
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
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

    int pos, value;
    cin >> pos >> value;

    if (pos > size(head))
    {
        cout << "Invalid index" << endl;
    }
    else
    {
        insert(head, pos, value);
    }

    print_linked_list(head);

    return 0;
}