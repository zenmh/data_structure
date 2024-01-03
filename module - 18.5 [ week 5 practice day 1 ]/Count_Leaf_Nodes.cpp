/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/

int count(BinaryTreeNode<int> *root)
{
      if (!root)
            return 0;
      if (!root->left && !root->right)
            return 1;
      else
      {
            int l = count(root->left);
            int r = count(root->right);

            return l + r;
      }
}

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
      return count(root);
}