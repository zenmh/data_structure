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

Node *take_input()
{
      int val;
      Node *root;
      queue<Node *> q;

      cin >> val;

      if (val == -1)
            root == NULL;
      else
            root = new Node(val);

      if (root)
            q.push(root);

      while (!q.empty())
      {
            // Step - 1
            Node *f = q.front();
            q.pop();

            // Step - 2
            int l, r;

            cin >> l >> r;

            if (l == -1)
                  f->left = NULL;
            else
                  f->left = new Node(l);

            if (r == -1)
                  f->right = NULL;
            else
                  f->right = new Node(r);

            // Step - 3
            if (f->left)
                  q.push(f->left);
            if (f->right)
                  q.push(f->right);
      }

      return root;
}

int count(Node *root)
{
      if (!root)
            return 0;

      int l, r;
      l = count(root->left);
      r = count(root->right);

      return l + r + 1;
}

int main()
{
      Node *root = take_input();

      cout << count(root);

      return 0;
}