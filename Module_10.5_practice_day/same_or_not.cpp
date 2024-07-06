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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

void match_linked_list(Node *head, Node *head2)
{
    int flag = 1;

    while (head != NULL)
    {
        if (head->value != head2->value)
        {
            flag = 0;
            break;
        }
        head = head->next;
        head2 = head2->next;
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
        insert_at_tail(head, tail, value);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int value2;
    while (true)
    {
        cin >> value2;
        if (value2 == -1)
            break;
        insert_at_tail(head2, tail2, value2);
    }

    if (size(head) == size(head2))
    {
        match_linked_list(head, head2);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}