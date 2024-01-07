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

void level_order_traversal(Node *root)
{
      queue<Node *> q;

      q.push(root);

      while (!q.empty())
      {
            Node *f = q.front();
            q.pop();

            cout << f->val << " ";

            if (f->left)
                  q.push(f->left);
            if (f->right)
                  q.push(f->right);
      }
}

Node *convert(int a[], int l, int r)
{
      if (l > r)
            return NULL;

      int mid = (l + r) / 2;
      Node *root = new Node(a[mid]), *left = convert(a, l, mid - 1), *right = convert(a, mid + 1, r);

      root->left = left;
      root->right = right;

      return root;
}

int main()
{
      int n;

      cin >> n;

      int a[n];

      for (int i = 0; i < n; i++)
            cin >> a[i];

      Node *root = convert(a, 0, n - 1);

      level_order_traversal(root);

      return 0;
}