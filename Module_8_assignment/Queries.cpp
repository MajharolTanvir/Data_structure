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

void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

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

void delete_head(Node *&head, int value)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_any_value(Node *&head, Node *&tail, int size, int value)
{
    if (value >= size)
    {
        return;
    }
    Node *temp = head;
    for (int i = 0; i < value - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    if (temp->next == NULL)
    {
        tail = temp;
    }
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

void print_linked_list(Node *head) // o(n) complexity
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, value;
        cin >> x >> value;
        if (value == -1)
            break;
        if (x == 0)
        {
            insert_head(head, tail, value);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, value);
        }
        else if (x == 2)
        {
            if (value == 0)
            {
                delete_head(head, value);
            }
            if (value > 0)
            {
                delete_any_value(head, tail, size(head), value);
            }
        }
        print_linked_list(head);
    }

    return 0;
}