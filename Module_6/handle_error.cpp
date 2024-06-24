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

// ------------------ Insert at tail -------------------------------
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

// ------------------ Printing linked list -------------------------------
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

// ------------------ Insert at head -------------------------------

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << endl
         << "Inserted at head-" << endl
         << endl;
}

// ------------------ Insert at any position -------------------------------
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << endl
                 << "Inserted wrong position" << endl
                 << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl
         << endl;
}

// ------------------ Delete any node except 0 -------------------------------
void delete_at_position(Node *head, int pos)
{
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << endl
                 << "Inserted wrong position" << endl
                 << endl
                 << endl;
            return;
        }
    }

    if (temp->next == NULL)
    {
        cout << endl
             << endl
             << "Inserted wrong position" << endl
             << endl
             << endl;
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    cout << "Node deleted" << endl;
}

// ------------------ Delete head -------------------------------
void delete_at_head(Node *&head)
{

    if (head == NULL)
    {
        cout << endl
             << endl
             << "Head is not available" << endl
             << endl
             << endl;
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Head deleted" << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;         // done
        cout << "Option 2: Print Linked List" << endl;      // done
        cout << "Option 3: Insert at any Position" << endl; // done
        cout << "Option 4: Insert at head" << endl;         // done
        cout << "Option 5: Delete at any position" << endl; // done
        cout << "Option 6: Delete at head" << endl;         // done
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
                insert_at_head(head, v);
            else
                insert_at_position(head, pos, v);
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter the value:" << endl;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position" << endl;
            cin >> pos;
            delete_at_position(head, pos);
        }
        else if (op == 6)
        {
            delete_at_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}