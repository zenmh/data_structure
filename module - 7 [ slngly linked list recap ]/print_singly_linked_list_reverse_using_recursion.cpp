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

void func(Node *n)
{
      if (n == NULL)
            return;
      else
      {
            cout << n->val << " ";
            func(n->next);
      }
}

void cnuf(Node *n)
{
      if (n == NULL)
            return;
      else
      {
            cnuf(n->next);
            cout << n->val << " ";
      }
}

int main()
{
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *d = new Node(50);

      head->next = a;
      a->next = b;
      b->next = c;
      c->next = d;

      func(head);

      cout << endl;

      cnuf(head);

      return 0;
}