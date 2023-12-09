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

void insert_at_head(Node *&head, Node *&tail, int val)
{
      Node *new_node = new Node(val);

      if (head == NULL)
      {
            head = new_node;
            tail = new_node;
      }

      else
      {
            new_node->next = head;
            head = new_node;
      }
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
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
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

int main()
{
      int val = 100, pos = 2;
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *tail = c;

      head->next = a;
      a->prev = head;
      a->next = b;
      b->prev = a;
      b->next = c;
      c->prev = b;

      int n = size(head);

      if (pos > n)
            cout << "Invalid Position To Insert" << endl;
      else if (pos == n)
            insert_at_tail(head, tail, val);
      else if (pos == 0)
            insert_at_head(head, tail, val);
      else
            insert_at_position_without_head_and_tail(head, pos, val);

      print_the_ll(head);

      return 0;
}