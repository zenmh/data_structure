
TreeNode *convert(vector<int> &v, int l, int r)
{
      if (l > r)
            return NULL;

      int mid = (l + r) / 2;

      TreeNode *root = new TreeNode(v[mid]),
               *left = convert(v, l, mid - 1),
               *right = convert(v, mid + 1, r);

      root->left = left;
      root->right = right;

      return root;
}

class Solution
{
public:
      TreeNode *sortedArrayToBST(vector<int> &v)
      {
            return convert(v, 0, v.size() - 1);
      }
};