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

void print_a_level(Node *root)
{
      int x;
      vector<int> v;
      queue<pair<Node *, int>> q;

      cin >> x;

      if (root)
            q.push({root, 0});

      while (!q.empty())
      {
            pair<Node *, int> f = q.front();
            Node *node = f.first;
            int level = f.second;
            q.pop();

            if (x == level)
                  v.push_back(node->val);

            if (node->left)
                  q.push({node->left, level + 1});
            if (node->right)
                  q.push({node->right, level + 1});
      }

      if (v.empty())
            cout << "Invalid";
      else
            for (int x : v)
                  cout << x << ' ';
}

int main()
{

      Node *root = take_input();

      print_a_level(root);

      return 0;
}