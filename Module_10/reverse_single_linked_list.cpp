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

void print_recursion(Node *n)
{
    if (n == NULL)
        return;

    cout << n->value << " ";
    print_recursion(n->next);
}

void print_reverse(Node *n)
{
    if (n == NULL)
        return;

    print_reverse(n->next);
    cout << n->value << " ";
}

void print_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }

    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    reverse(head, head);
    print_list(head);

    return 0;
}