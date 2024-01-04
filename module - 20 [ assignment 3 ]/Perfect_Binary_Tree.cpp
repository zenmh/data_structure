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

int max_height(Node *root)
{
      if (!root)
            return 0;

      int l = max_height(root->left), r = max_height(root->right);

      return max(l, r) + 1;
}

int is_perfect(Node *root)
{
      if (!root)
            return 0;

      if (!root->left && !root->right)
            return 1;

      int l = is_perfect(root->left), r = is_perfect(root->right);

      return l + r + 1;
}

int main()
{
      Node *root = take_input();

      if (pow(2, max_height(root)) - 1 == is_perfect(root))
            cout << "YES";
      else
            cout << "NO";

      return 0;
}