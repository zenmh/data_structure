#include <bits/stdc++.h>

int nodeLevel(TreeNode<int> *root, int x)
{
      queue<pair<TreeNode<int> *, int>> q;

      q.push({root, 1});

      while (!q.empty())
      {
            pair<TreeNode<int> *, int> f = q.front();
            TreeNode<int> *node = f.first;
            int level = f.second;
            q.pop();

            if (node->val == x)
                  return level;

            if (node->left)
                  q.push({node->left, level + 1});
            if (node->right)
                  q.push({node->right, level + 1});
      }
}
