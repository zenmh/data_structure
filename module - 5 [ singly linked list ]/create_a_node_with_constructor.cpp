#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int val;
      Node *next;

      Node(int val) // constructor
      {
            this->val = val;
            this->next = NULL;
      }
};

int main()
{
      Node a(10), b(20);

      a.next = &b;

      cout << a.val << " " << b.val << endl
           << a.val << " " << (*a.next).val << endl // longcut
           << a.val << " " << a.next->val << endl;  // access value of b by address of node b

      return 0;
}