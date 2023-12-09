#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int val;
      Node *next, *prev;

      Node(int val)
      {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
      }
};

int size(Node *head)
{
      int cnt = 0;
      Node *tmp = head;

      while (tmp)
      {
            cnt++;
            tmp = tmp->next;
      }

      return cnt;
}

void insert_at_position_without_head_and_tail(Node *head, int pos, int val)
{
      Node *new_node = new Node(val), *tmp = head;

      for (int i = 1; i < pos; i++)
            tmp = tmp->next;

      new_node->next = tmp->next;
      new_node->prev = tmp;
      tmp->next->prev = new_node;
      tmp->next = new_node;
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

int main()
{
      int val = 100, pos = 3;
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40);

      head->next = a;
      a->prev = head;
      a->next = b;
      b->prev = a;
      b->next = c;
      c->prev = b;

      if (pos >= size(head))
            cout << "Invalid Position To Insert";
      else
      {
            insert_at_position_without_head_and_tail(head, pos, val);
            print_the_ll(head);
      }

      return 0;
}