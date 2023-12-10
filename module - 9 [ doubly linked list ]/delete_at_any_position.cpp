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

void delete_the_head(Node *&head)
{
      Node *delete_node = head;

      head = head->next;
      head->prev = NULL;

      delete delete_node;
}

void delete_a_node_at_position(Node *head, int pos)
{
      Node *tmp = head;

      for (int i = 1; i < pos; i++)
            tmp = tmp->next;

      Node *delete_node = tmp->next;

      tmp->next = tmp->next->next;
      tmp->next->prev = tmp;

      delete delete_node;
}

void delete_the_tail(Node *&tail)
{
      Node *delete_node = tail;

      tail = tail->prev;
      tail->next = NULL;

      delete delete_node;
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
      int val = 100, pos = 5;
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *tail = c;

      head->next = a;
      a->prev = head;
      a->next = b;
      b->prev = a;
      b->next = c;
      c->prev = b;

      int n = size(head);

      if (pos >= n)
            cout << "Invalid Position To Delete" << endl;
      else if (pos == 0)
            delete_the_head(head);
      else if (pos == n - 1)
            delete_the_tail(tail);
      else
            delete_a_node_at_position(head, pos);

      print_the_ll(head);

      return 0;
}