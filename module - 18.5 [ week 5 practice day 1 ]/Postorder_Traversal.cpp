vector<int> v;

void post_order(TreeNode *root)
{
      if (!root)
            return;

      post_order(root->left);
      post_order(root->right);

      v.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
      v.clear();

      post_order(root);

      return v;
}