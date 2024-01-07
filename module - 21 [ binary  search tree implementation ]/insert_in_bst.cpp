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

void insert(Node *&root, int x) // O(H)
{
      if (!root)
      {
            root = new Node(x);
            return;
      }

      if (root->val > x)
      {
            if (!root->left)
                  root->left = new Node(x);
            else
                  insert(root->left, x);
      }
      else
      {
            if (!root->right)
                  root->right = new Node(x);
            else
                  insert(root->right, x);
      }
}

void level_order_traversal(Node *root)
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

int main()
{
      Node *root = take_input();

      insert(root, 22);
      insert(root, 1);
      insert(root, 111);

      level_order_traversal(root);

      return 0;
}