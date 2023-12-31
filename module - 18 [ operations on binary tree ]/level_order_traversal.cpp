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

void left_to_right(Node *root)
{
      queue<Node *> q;

      q.push(root);

      while (!q.empty())
      {
            // Step 1 : line theke anbo
            Node *f = q.front();
            q.pop();

            // Step 2 : jabotio kaj ses kora
            cout << f->val << " ";

            // Step 3 : ei node er childrens ke q te diya deay
            if (f->left)
                  q.push(f->left);
            if (f->right)
                  q.push(f->right);
      }
}

void right_to_left(Node *root)
{
      queue<Node *> q;

      q.push(root);

      while (!q.empty())
      {
            // Step 1 : line theke anbo
            Node *f = q.front();
            q.pop();

            // Step 2 : jabotio kaj ses kora
            cout << f->val << " ";

            // Step 3 : ei node er childrens ke q te diya deay
            if (f->right)
                  q.push(f->right);
            if (f->left)
                  q.push(f->left);
      }
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

      left_to_right(root);

      cout << endl;

      right_to_left(root);

      return 0;
}