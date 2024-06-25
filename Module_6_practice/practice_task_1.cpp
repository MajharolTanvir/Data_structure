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

// 2. Count the size
void count_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << endl
         << "Display counted value: " << count << endl
         << endl;
}

// 3. Display list
void printing_node(Node *head)
{
    Node *temp = head;
    cout << endl
         << "Show linked list: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

// 4. Insertion at head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;

    cout << endl
         << "Head Inserted" << endl
         << endl;
}

// 5. Insertion at tail
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

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

// 6. Insertion at any postion
void insert_any_pos(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

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
    newNode->next = temp->next;
    temp->next = newNode;

    cout << endl
         << "Data inserted" << endl
         << endl;
}

// 7. Delete at head
void delete_head(Node *&head)
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
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;

    cout << endl
         << "Head deleted" << endl
         << endl;
}

// 8. Delete any pos
void delete_any_pos(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    cout << endl
         << "Node deleted" << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int op;
        cout << "Option 1: Insert data from user" << endl;
        cout << "Option 2: Count the size of the list" << endl;
        cout << "Option 3: Display list" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Insert at tail" << endl;
        cout << "Option 6: Insert at specific position" << endl;
        cout << "Option 7: Delete at head" << endl;
        cout << "Option 8: Delete at any position" << endl;
        cout << "Option 9: Terminate server" << endl;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << endl
                 << "Enter the value" << endl;
            cin >> v;
            Node *newData = new Node(v);

            cout << endl
                 << "Single data inserted" << endl
                 << newData->val << endl;
        }
        else if (op == 2)
        {
            count_list(head);
        }
        else if (op == 3)
        {
            printing_node(head);
        }
        else if (op == 4)
        {
            int v;
            cin >> v;
            if (v == -1)
                break;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int v;

            cout << endl
                 << "Enter value" << endl;
            cin >> v;
            if (v == -1)
                break;
            insert_at_tail(head, v);
        }
        else if (op == 6)
        {
            int pos, v;
            cout << "insert a position: " << endl;
            cin >> pos;
            cout << "insert a value: " << endl;
            cin >> v;
            if (v == -1)
                break;
            insert_any_pos(head, pos, v);
        }

        else if (op == 7)
        {
            delete_head(head);
        }

        else if (op == 8)
        {
            int pos;
            cout << "insert a position: " << endl;
            cin >> pos;

            delete_any_pos(head, pos);
        }

        else if (op == 9)
        {
            break;
        }
    }
    return 0;
}