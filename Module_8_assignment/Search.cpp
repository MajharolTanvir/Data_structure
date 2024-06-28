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

void print_search_value(Node *head, int x)
{
    Node *temp = head;
    int size = 0;
    int value = 0;

    while (temp != NULL)
    {
        size++;
        if (temp->value == x)
        {
            break;
        }

        value++;
        temp = temp->next;
    }
    if (value == size)
        cout << -1 << endl;
    else
        cout << value << endl;
}

int main()
{
    int test;
    cin >> test;

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
        int x;
        cin >> x;
        print_search_value(head, x);
    }

    return 0;
}