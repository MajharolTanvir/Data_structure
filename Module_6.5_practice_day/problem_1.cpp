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

int main()
{
    Node *head = NULL;
    int value;
    int count = 0;
    while (1)
    {
        cin >> value;

        if (value == -1)
            break;
        else
        {
            count++;
            insert_at_tail(head, value);
        }
    }
    cout << count;
    return 0;
}