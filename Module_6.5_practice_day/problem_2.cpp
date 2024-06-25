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

void duplicate_value(Node *head)
{
    Node *temp = head;
    bool flag = false;
    while (temp != NULL)
    {
        for (Node *tmp = temp->next; tmp != NULL; tmp = tmp->next)
        {
            if (tmp->val == temp->val)
            {
                flag = true;
                break;
            }
        }
        temp = temp->next;
    }

    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    int value;
    while (1)
    {
        cin >> value;

        if (value == -1)
            break;
        else
        {
            insert_at_tail(head, value);
        }
    }
    duplicate_value(head);

    return 0;
}