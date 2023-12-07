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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
      Node *new_node = new Node(val);

      if (head == NULL)
      {
            head = new_node;
            tail = new_node;
      }
      else
      {
            tail->next = new_node;
            tail = new_node;
      }
}

int size(Node *head)
{
      int cnt = 0;
      Node *tmp = head;

      while (tmp)
      {
            tmp = tmp->next;
            cnt++;
      }

      return cnt;
}

int main()
{

      int val;
      bool flag = true;
      Node *head1 = NULL, *head2 = NULL, *tail1 = NULL, *tail2 = NULL;

      while (1)
      {
            cin >> val;

            if (val == -1)
                  break;
            else
                  insert_at_tail(head1, tail1, val);
      }

      while (1)
      {
            cin >> val;

            if (val == -1)
                  break;
            else
                  insert_at_tail(head2, tail2, val);
      }

      if (size(head1) != size(head2))
            flag = false;
      else
      {
            Node *i = head1, *j = head2;
            while (i)
            {
                  if (i->val != j->val)
                  {
                        flag = false;
                        break;
                  }

                  i = i->next;
                  j = j->next;
            }
      }

      if (flag)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}