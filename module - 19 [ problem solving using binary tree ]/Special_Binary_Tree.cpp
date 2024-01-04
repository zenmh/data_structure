#include <bits/stdc++.h>

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
      if (!root->left && !root->right)
            return true;
      if (!root->left || !root->right)
            return false;

      bool l = isSpecialBinaryTree(root->left);
      bool r = isSpecialBinaryTree(root->right);

      return l && r;
}