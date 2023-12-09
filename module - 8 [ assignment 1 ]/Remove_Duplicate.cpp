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

bool check_duplicate(Node *head, int x)
{
      Node *tmp = head;

      while (tmp)
      {
            if (tmp->val == x)
                  return false;

            tmp = tmp->next;
      }

      return true;
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
            else if (check_duplicate(head, val))
                  insert_at_tail(head, tail, val);
      }

      print_the_ll(head);

      return 0;
}