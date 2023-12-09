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

void delete_a_node(Node *head, int val)
{
      Node *tmp = head;

      while (tmp->next)
      {
            if (tmp->next->val == val)
            {
                  Node *delete_node = tmp->next;

                  tmp->next = delete_node->next;

                  delete delete_node;
            }
            else
            {
                  tmp = tmp->next;
            }
      }
}

void delete_duplicate(Node *head)
{
      Node *tmp = head;

      while (tmp)
      {
            delete_a_node(tmp, tmp->val);

            tmp = tmp->next;
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
}

int main()
{
      int val;
      Node *head = NULL, *tail = NULL;

      while (1)
      {
            cin >> val;

            if (val == -1)
                  break;
            else
                  insert_at_tail(head, tail, val);
      }

      delete_duplicate(head);

      print_the_ll(head);

      return 0;
}