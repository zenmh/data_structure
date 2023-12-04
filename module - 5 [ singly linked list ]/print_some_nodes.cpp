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
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *d = new Node(50);

      head->next = a;
      a->next = b;
      b->next = c;
      c->next = d;

      // worst way
      // cout << head->val << endl                          // 10
      //      << head->next->val << endl                    // 20
      //      << head->next->next->val << endl              // 30
      //      << head->next->next->next->val << endl        // 40
      //      << head->next->next->next->next->val << endl; // 50

      // better way

      Node *tmp = head; // to not move the head

      // while (tmp != NULL) // longcut
      while (tmp) // shortcut
      {
            cout << tmp->val << endl;
            tmp = tmp->next;
      }

      return 0;
}