// Way - 1
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

// Way - 2
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
      if (!root)
            return false;

      if (root->data == x)
            return true;

      bool l = isNodePresent(root->left, x), r = isNodePresent(root->right, x);

      return l || r;
}