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

void delete_element(Node *head, int position) // O(n)
{
    Node *temp = head;

    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head) // O(1)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int size(Node *head) // O(n) complexity
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

void print_linked_list(Node *head) // o(n) complexity
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    int pos;
    cin >> pos;

    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else
        delete_element(head, pos);
    print_linked_list(head);

    return 0;
}