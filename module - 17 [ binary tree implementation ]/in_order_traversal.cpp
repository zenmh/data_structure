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

void in_order(Node *root)
{
      if (!root) // base case
            return;

      in_order(root->left);
      // kaj suru
      cout << root->val << " ";
      // kaj ses
      in_order(root->right);
}

int main()
{
      Node *root = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *d = new Node(50), *e = new Node(60), *f = new Node(70), *g = new Node(80), *h = new Node(90), *i = new Node(100);

      root->left = a;
      root->right = b;
      a->left = c;
      a->right = h;
      c->right = e;
      h->right = i;
      b->right = d;
      d->left = f;
      d->right = g;

      in_order(root);

      return 0;
}