#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int val;
      Node *next;

      Node(int val)
      {
            this->val = val;
            this->next = NULL;
      }
};

void insert_at_tail(Node *&head, int value)
{
      Node *new_node = new Node(value);
      Node *tmp = head;

      if (head == NULL)
            head = new_node;
      else
      {
            while (tmp->next)
                  tmp = tmp->next;

            tmp->next = new_node;
      }
}

int main()
{

      int x, prev = INT_MIN;
      bool flag = true;
      Node *head = NULL;

      while (1)
      {
            cin >> x;

            if (x == -1)
                  break;
            else if (x < prev)
            {
                  flag = false;
                  break;
            }
            else
                  insert_at_tail(head, x);

            prev = x;
      }

      if (flag)
            cout << endl
                 << "YES" << endl;
      else
            cout << endl
                 << "NO" << endl;

      return 0;
}