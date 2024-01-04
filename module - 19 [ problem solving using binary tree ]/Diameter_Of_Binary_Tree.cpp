
int mx = 0;

int maxHeight(TreeNode<int> *root)
{
      if (!root)
            return 0;

      int l = maxHeight(root->left);
      int r = maxHeight(root->right);

      int d = l + r;

      mx = max(mx, d);

      return max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
      mx = 0;

      int l = maxHeight(root->left);
      int r = maxHeight(root->right);

      int d = l + r;

      return max(mx, d);
}
