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

void print_the_ll(Node *head)
{
      Node *tmp = head;

      while (tmp)
      {
            cout << tmp->val << " ";
            tmp = tmp->next;
      }

      cout << endl;
}

void insert_at_index(Node *&head, int index, int value, int *pt_cnt)
{
      Node *new_node = new Node(value);
      Node *tmp = head;

      if (index > (*pt_cnt - 1))
      {
            cout << "Invalid" << endl;
      }
      else if (index == 0)
            head = new_node;
      else
      {
            for (int i = 1; i < index; i++)
                  tmp = tmp->next;

            new_node->next = tmp->next;
            tmp->next = new_node;

            *pt_cnt++;
      }

      print_the_ll(head);
}

int main()
{

      int x, q, cnt = 0;
      Node *head = NULL;

      while (1)
      {

            cin >> x;

            if (x == -1)
                  break;
            else
            {
                  insert_at_tail(head, x);
                  cnt++;
            }
      }

      cin >> q;

      while (q--)
      {
            int index, value;
            cin >> index >> value;

            insert_at_index(head, index, value, &cnt);
      }

      return 0;
}