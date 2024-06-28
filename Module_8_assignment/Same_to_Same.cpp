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

void equal_value(Node *head, Node *head2)
{
    Node *temp1 = head;
    Node *temp2 = head2;
    int flag = 1;

    if (size(head) != size(head2))
    {
        flag = 0;
    }
    else
    {
        while (temp1 != NULL)
        {
            if (temp1->value != temp2->value)
            {
                flag = 0;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int value;
    int value2;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }

    while (true)
    {
        cin >> value2;
        if (value2 == -1)
            break;
        insert_tail(head2, tail2, value2);
    }

    equal_value(head, head2);

    return 0;
}