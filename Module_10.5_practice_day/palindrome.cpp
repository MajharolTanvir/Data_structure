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

void check_palindrome(Node *head, Node *tail)
{
    int flag = 1;
    if (size(head) % 2 == 0)
    {
        while (head->next != tail)
        {
            if (head->value != tail->value)
            {
                flag = 0;
                break;
            }
            head = head->next;
            tail = tail->prev;
        }
    }
    else
    {
        while (head == tail)
        {   
            if (head->value != tail->value)
            {
                flag = 0;
                break;
            }
            head = head->next;
            tail = tail->prev;
        }
    }

    if (flag == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
    check_palindrome(head, tail);
    return 0;
}