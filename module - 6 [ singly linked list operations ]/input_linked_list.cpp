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

      if (head == NULL)
            head = new_node;
      else
      {
            Node *tmp = head;
            while (tmp->next != NULL)
                  tmp = tmp->next;
            // enhon tmp last node a
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
}

int main()
{
      int v;
      Node *head = NULL;

      while (1)
      {
            cin >> v;

            if (v == -1)
                  break;
            else
                  insert_at_tail(head, v);
      }

      print_the_ll(head);

      return 0;
}