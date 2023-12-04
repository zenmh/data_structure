#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int val;
      Node *next;
};

int main()
{
      Node a, b;

      a.val = 10;
      b.val = 20;
      a.next = &b;
      b.next = NULL;

      cout << a.val << " " << b.val << endl
           << a.val << " " << (*a.next).val << endl // longcut
           << a.val << " " << a.next->val << endl;  // access value of b by address of node b

      return 0;
}