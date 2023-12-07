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

void check_duplicate(Node *head)
{
      int a[100] = {0};
      bool flag = false;
      Node *tmp = head;

      while (tmp)
      {
            a[tmp->val]++;
            tmp = tmp->next;
      }

      for (int i = 0; i < 100; i++)
      {
            if (a[i] > 1)
            {
                  flag = true;
                  break;
            }
      }

      if (flag)
            cout << endl
                 << "YES" << endl;
      else
            cout << endl
                 << "NO" << endl;
}

int main()
{

      int x;
      Node *head = NULL;

      while (1)
      {

            cin >> x;

            if (x == -1)
                  break;
            else
                  insert_at_tail(head, x);
      }

      check_duplicate(head);

      return 0;
}