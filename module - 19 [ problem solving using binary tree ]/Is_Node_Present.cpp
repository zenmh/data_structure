/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isExist(BinaryTreeNode<int> *root, int x)
{
      queue<BinaryTreeNode<int> *> q;

      q.push(root);

      bool flag = false;

      while (!q.empty())
      {
            // Step 1 : line theke anbo
            BinaryTreeNode<int> *f = q.front();
            q.pop();

            // Step 2 : jabotio kaj ses kora
            if (f->data == x)
                  flag = true;

            // Step 3 : ei node er childrens ke q te diya deay
            if (f->left)
                  q.push(f->left);
            if (f->right)
                  q.push(f->right);
      }
      return flag;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
      isExist(root, x);
}