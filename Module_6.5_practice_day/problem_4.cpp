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

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_any_pos(Node * head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
            break;
        else
        {
            insert_at_tail(head, value);
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {

        int index, v;
        cin >> index >> v;
        if (index == 0)
        {
            insert_at_head(head, v);
        }
        else
        {
            insert_any_pos(head, index, v);
        }
    }

    return 0;
}