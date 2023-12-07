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

int size(Node *head)
{
      Node *tmp = head;
      int cnt = 0;

      while (tmp)
      {
            cnt++;
            tmp = tmp->next;
      }

      return cnt;
}

void insert_at_head(Node *&head, int value)
{
      Node *new_node = new Node(value);

      new_node->next = head;
      head = new_node;
}

void insert_at_position(Node *head, int pos, int value)
{
      Node *new_node = new Node(value), *tmp = head;

      for (int i = 1; i < pos; i++)
            tmp = tmp->next;

      new_node->next = tmp->next;
      tmp->next = new_node;
}

void insert_at_tail_without_track(Node *head, int value)
{
      Node *new_node = new Node(value), *tmp = head;

      while (tmp->next)
            tmp = tmp->next;

      tmp->next = new_node;
}

void insert_at_tail_with_track(Node *&head, Node *&tail, int value)
{
      Node *new_node = new Node(value);

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

void print_the_linked_list(Node *head)
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
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *d = new Node(50), *tail = d;

      head->next = a;
      a->next = b;
      b->next = c;
      c->next = d;

      int pos, val;
      cin >> pos >> val;

      print_the_linked_list(head);

      if (pos == 0)
            insert_at_head(head, val); // O(1)
      else if (pos == size(head))
      {
            // insert_at_tail_without_track(head, val); // O(N)
            insert_at_tail_with_track(head, tail, val); // O(1) --> better
      }
      else
            insert_at_position(head, pos, val); // O(N)

      print_the_linked_list(head);

      return 0;
}