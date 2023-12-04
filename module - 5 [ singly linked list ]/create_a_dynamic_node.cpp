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
      // Node a(10); // Static

      Node *head = new Node(10), *a = new Node(20); // dynamic

      head->next = a;

      cout << head->val << " " << a->val << endl              // menual accessing
           << head->val << " " << (*(*head).next).val << endl // longcut accessing
           << head->val << " " << head->next->val << endl;    // shortcut accessing

      return 0;
}