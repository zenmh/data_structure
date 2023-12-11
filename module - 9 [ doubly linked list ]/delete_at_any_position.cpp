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

void delete_the_head(Node *&head, Node *&tail)
{
      Node *delete_node = head;

      head = head->next;

      delete delete_node;

      if (head == NULL)
            tail = NULL;
      else
            head->prev = NULL;
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

void delete_the_tail(Node *&head, Node *&tail)
{
      Node *delete_node = tail;

      tail = tail->prev;

      delete delete_node;

      if (tail == NULL)
            head = NULL;
      else
            tail->next = NULL;
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
      int pos = 0;
      Node *head = new Node(10), *tail = head;

      int n = size(head);

      if (pos >= n)
            cout << "Invalid Position To Delete" << endl;
      else if (pos == 0)
            delete_the_head(head, tail);
      else if (pos == n - 1)
            delete_the_tail(head, tail);
      else
            delete_a_node_at_position(head, pos);

      print_the_ll(head);

      return 0;
}