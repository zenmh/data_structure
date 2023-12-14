#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev, *next;

    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->prev = tail;
        tail->next = new_node;

        tail = new_node;
    }
}

bool find(Node *head, string y, Node *&cur)
{
    Node *tmp = head;

    while (tmp)
    {
        if (tmp->val == y)
        {
            cur = tmp;
            return true;
        }

        tmp = tmp->next;
    }

    return false;
}

void visit(Node *head, string y, Node *&cur)
{
    if (find(head, y, cur))
    {
        cout << y << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&cur)
{
    if (cur->prev != NULL)
    {
        cout << cur->prev->val << endl;
        cur = cur->prev;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void next(Node *&cur)
{
    if (cur->next != NULL)
    {
        cout << cur->next->val << endl;
        cur = cur->next;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    string val, x, y;
    int q;
    Node *head = NULL, *tail = NULL, *cur = NULL;

    while (1)
    {
        cin >> val;

        if (val == "end")
            break;

        insert_at_tail(head, tail, val);
    }

    cin >> q;

    while (q--)
    {
        cin >> x;

        if (x == "visit")
        {
            cin >> y;

            visit(head, y, cur);
        }
        else if (x == "prev")
        {
            prev(cur);
        }
        else // x == "next"
        {
            next(cur);
        }
    }

    return 0;
}