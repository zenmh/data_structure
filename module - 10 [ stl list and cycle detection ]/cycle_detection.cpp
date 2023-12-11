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

int main()
{
    bool flag = false;
    Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = a;

    Node *fast = head, *slow = head;

    // Hare and Tortoise or Fast and Slow Technique
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Cycle Detected";
    else
        cout << "No Cycle Found";

    return 0;
}