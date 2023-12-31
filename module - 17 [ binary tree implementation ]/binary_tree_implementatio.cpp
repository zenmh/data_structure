#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int val;
      Node *left, *right;

      Node(int val)
      {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
      }
};

int main()
{
      Node *root = new Node(10), *a = new Node(10), *b = new Node(10), *c = new Node(10), *d = new Node(10), *e = new Node(10), *f = new Node(10), *g = new Node(10), *h = new Node(10), *i = new Node(10);

      root->left = a;
      root->right = b;
      a->left = c;
      a->right = h;
      c->right = e;
      h->right = i;
      b->right = d;
      d->left = f;
      d->right = g;

      return 0;
}