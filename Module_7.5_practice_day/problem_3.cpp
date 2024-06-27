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

void print_linked_list(Node *head, int size) // o(n) complexity
{
    Node *temp = head;

    int pos = size / 2;

    if (size % 2 == 0)
    {
        for (int i = 0; i < pos-1; i++)
        {
            temp = temp->next;
        }

        cout << temp->value << " " << temp->next->value;
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            temp = temp->next;
        }
        cout << temp->value;
    }
}

int linked_list_size(Node *head) // o(n) complexity
{
    Node *temp = head;
    int size = 0;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
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
    print_linked_list(head, linked_list_size(head));

    return 0;
}