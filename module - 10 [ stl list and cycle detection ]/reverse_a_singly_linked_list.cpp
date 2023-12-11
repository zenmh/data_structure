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

void reverse(Node *&head, Node *current)
{
    if (current->next == NULL)
    {
        head = current;
        return;
    }

    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
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
    Node *head = new Node(10), *a = new Node(20), *b = new Node(30);
    head->next = a;
    a->next = b;

    reverse(head, head);
    print(head); // 30 20 10

    return 0;
}