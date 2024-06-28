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

void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void min_max_linked_list(Node *head) // o(n) complexity
{

    int min = INT_MAX;
    int max = INT_MIN;

    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->value < min)
        {
            min = i->value;
        }
        if (i->value > max)
        {
            max = i->value;
        }
    }
    int deference = max - min;
    cout << deference;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }
    min_max_linked_list(head);

    return 0;
}