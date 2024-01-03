#include <bits/stdc++.h>

vector<int> getLeftView(TreeNode<int> *root)
{
      vector<int> v;
      queue<pair<TreeNode<int> *, int>> q;
      bool frq[3001] = {false};

      if (root)
            q.push({root, 1});

      while (!q.empty())
      {
            pair<TreeNode<int> *, int> f = q.front();
            TreeNode<int> *node = f.first;
            int level = f.second;
            q.pop();

            if (!frq[level])
            {
                  v.push_back(node->data);
                  frq[level] = true;
            }

            if (node->left)
                  q.push({node->left, level + 1});
            if (node->right)
                  q.push({node->right, level + 1});
      }

      return v;
}