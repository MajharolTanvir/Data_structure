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

int size(Node *head) // o(n) complexity
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

int main()
{
    int test = 2;
    int first_size;
    int second_size;

    for (int i = 0; i < test; i++)
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
        if (i == 0)
        {
            first_size = size(head);
        }
        if (i == 1)
        {
            second_size = size(head);
        }
        cout << endl;
    }

    if (first_size == second_size)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}