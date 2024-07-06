#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string value;
    Node *next;
    Node *prev;
    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string value)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string value, values;
    while (true)
    {
        cin >> value;
        if (value == "end")
            break;
        insert_at_tail(head, tail, value);
    }

    Node *cur = head;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string command, address;
        cin >> command;
        if (command == "visit")
        {
            cin >> address;

            Node *temp = head;
            while (temp != NULL)
            {
                if (temp->value != address && temp->next == NULL)
                {
                    cout << "Not Available" << endl;
                }
                else if (temp->value == address)
                {
                    cout << temp->value << endl;
                    cur = temp;
                    break;
                }
                temp = temp->next;
            }
        }
        else if (command == "prev")
        {
            if (cur->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << cur->prev->value << endl;
                cur = cur->prev;
            }
        }
        else if (command == "next")
        {
            if (cur->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << cur->next->value << endl;
                cur = cur->next;
            }
        }
    }

    return 0;
}