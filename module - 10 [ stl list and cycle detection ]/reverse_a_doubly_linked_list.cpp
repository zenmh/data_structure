#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next, *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void reverse(Node *head, Node *tail)
{
    Node *i = head, *j = tail;

    while (i != j && i->next != j)
    {
        swap(i->val, j->val);

        i = i->next;
        j = j->prev;
    }
}

void print(Node *head)
{
    Node *tmp = head;

    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    reverse(head, tail);
    print(head); // 40 30 20 10

    return 0;
}