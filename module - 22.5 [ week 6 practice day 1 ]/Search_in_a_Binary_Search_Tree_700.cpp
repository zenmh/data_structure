TreeNode *level(TreeNode *root, int x)
{
      queue<TreeNode *> q;

      if (root)
            q.push(root);

      while (!q.empty())
      {
            // Step 1
            TreeNode *f = q.front();
            q.pop();

            // Step 2
            if (f->val == x)
                  return f;

            // Step 3
            if (f->right)
                  q.push(f->right);
            if (f->left)
                  q.push(f->left);
      }
      return NULL;
}

class Solution
{
public:
      TreeNode *searchBST(TreeNode *root, int x)
      {
            return level(root, x);
      }
};