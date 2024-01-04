#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int val;
      Node *left, *right;

      Node(int val)
      {
            left = NULL;
            right = NULL;
            this->val = val;
      }
};

Node *take_input()
{
      int val, l, r;
      Node *root;
      queue<Node *> q;

      cin >> val;

      if (val == -1)
            root = NULL;
      else
            root = new Node(val);

      if (root)
            q.push(root);

      while (!q.empty())
      {
            Node *f = q.front();
            q.pop();

            cin >> l >> r;

            if (l == -1)
                  f->left = NULL;
            else
                  f->left = new Node(l);
            if (r == -1)
                  f->right = NULL;
            else
                  f->right = new Node(r);

            if (f->left)
                  q.push(f->left);
            if (f->right)
                  q.push(f->right);
      }

      return root;
}

vector<int> v;

void sum(Node *root)
{
      if (!root)
            return;

      if (!root->left && !root->right)
            v.push_back(root->val);

      sum(root->left);
      sum(root->right);
}

int main()
{
      Node *root = take_input();

      sum(root);

      sort(v.begin(), v.end(), greater<int>());

      for (int x : v)
            cout << x << " ";

      return 0;
}