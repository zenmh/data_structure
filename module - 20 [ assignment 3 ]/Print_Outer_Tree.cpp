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

void left_side(Node *left)
{
      if (!left)
            return;

      if (left->left)
      {
            left_side(left->left);
            v.push_back(left->val);
      }
      else
      {
            left_side(left->right);
            v.push_back(left->val);
      }
}

void right_side(Node *right)
{
      if (!right)
            return;

      if (right->right)
      {
            v.push_back(right->val);
            right_side(right->right);
      }
      else
      {
            v.push_back(right->val);
            right_side(right->left);
      }
}

int main()
{
      Node *root = take_input();

      if (root->left)
            left_side(root->left);

      v.push_back(root->val);

      if (root->right)
            right_side(root->right);

      for (int x : v)
            cout << x << ' ';

      return 0;
}
