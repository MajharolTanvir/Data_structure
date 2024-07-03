#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void delete_at_head(Node *&head)
{
    Node *deleteNode = head;
    if (head == NULL)
    {
        return;
    }

    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void delete_at_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}

int size(Node *head)
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

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos, value;
    cin >> pos >> value;
    if (pos >= size(head))
    {
        cout << "invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_at_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_at_tail(tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_linked_list(head);
    print_reverse(tail);

    return 0;
}