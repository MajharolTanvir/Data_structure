#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void multi_value(Node *head, int size)
{
    Node *temp = head;
    int pos = size / 2;

    if (size % 2 == 0)
    {

        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            temp = temp->next;
        }
        cout << temp->val;
    }
}

int main()
{
    Node *head = NULL;
    int value;
    int size = 0;
    while (1)
    {
        cin >> value;

        if (value == -1)
            break;
        else
        {
            size++;
            insert_at_tail(head, value);
        }
    }
    multi_value(head, size);

    return 0;
}