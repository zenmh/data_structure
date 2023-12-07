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

void search_the_value(Node *head, int x)
{
      int cnt = 0;
      bool is_exist = false;
      Node *tmp = head;

      while (tmp)
      {
            if (tmp->val == x)
            {
                  is_exist = true;
                  break;
            }

            tmp = tmp->next;
            cnt++;
      }

      if (is_exist)
            cout << cnt << endl;
      else
            cout << -1 << endl;
}

int main()
{
      int tc;
      cin >> tc;

      while (tc--)
      {
            int val, x;
            Node *head = NULL, *tail = NULL;

            while (1)
            {
                  cin >> val;

                  if (val == -1)
                        break;
                  else
                        insert_at_tail(head, tail, val);
            }

            cin >> x;

            search_the_value(head, x);
      }

      return 0;
}