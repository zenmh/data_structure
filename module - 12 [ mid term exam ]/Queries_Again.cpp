#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int val;
      Node *prev, *next;

      Node(int val)
      {
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
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
            head->prev = new_node;

            head = new_node;
      }
}

void insert_at_position(Node *&head, int x, int val)
{
      Node *new_node = new Node(val), *tmp = head;

      for (int i = 1; i < x; i++)
      {
            tmp = tmp->next;
      }

      new_node->prev = tmp;
      new_node->next = tmp->next;
      tmp->next->prev = new_node;
      tmp->next = new_node;
}

void insert_at_tail(Node *&tail, int val)
{
      Node *new_node = new Node(val);

      new_node->prev = tail;
      tail->next = new_node;

      tail = new_node;
}

void print_forword(Node *head)
{
      Node *tmp = head;

      cout << "L -> ";

      while (tmp)
      {
            cout << tmp->val << " ";
            tmp = tmp->next;
      }

      cout << endl;
}

void print_reverse(Node *tail)
{
      Node *tmp = tail;

      cout << "R -> ";

      while (tmp)
      {
            cout << tmp->val << " ";
            tmp = tmp->prev;
      }

      cout << endl;
}

int main()
{
      int q, x, v;
      Node *head = NULL, *tail = NULL;

      cin >> q;

      while (q--)
      {
            cin >> x >> v;

            if (size(head) < x)
            {
                  cout << "Invalid" << endl;
            }
            else if (x == 0)
            {
                  insert_at_head(head, tail, v);
                  print_forword(head);
                  print_reverse(tail);
            }
            else if (size(head) == x)
            {
                  insert_at_tail(tail, v);
                  print_forword(head);
                  print_reverse(tail);
            }
            else
            {
                  insert_at_position(head, x, v);
                  print_forword(head);
                  print_reverse(tail);
            }
      }

      return 0;
}