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

void delete_the_head(Node *&head)
{
      Node *delete_node = head;

      head = head->next;

      delete delete_node;
}

void delete_a_node(Node *head, int pos)
{
      Node *tmp = head;

      for (int i = 1; i < pos; i++)
            tmp = tmp->next;

      Node *delete_node = tmp->next;

      tmp->next = tmp->next->next;

      delete delete_node;
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
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *d = new Node(50);

      head->next = a;
      a->next = b;
      b->next = c;
      c->next = d;

      int pos;
      cin >> pos;

      print_the_linked_list(head);

      if (pos >= size(head))
            cout << "Invalid Index" << endl;
      else if (pos == 0)
            delete_the_head(head);
      else
            delete_a_node(head, pos);

      print_the_linked_list(head);

      return 0;
}