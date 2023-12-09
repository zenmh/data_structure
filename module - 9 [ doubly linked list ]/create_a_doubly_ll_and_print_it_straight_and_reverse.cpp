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

void print(Node *head)
{
      Node *tmp = head;

      while (tmp)
      {
            cout << tmp->val << " ";

            tmp = tmp->next;
      }
}

void tnirp(Node *tail)
{
      Node *tmp = tail;

      while (tmp)
      {
            cout << tmp->val << " ";

            tmp = tmp->prev;
      }
}

void print_the_ll(Node *ref_point, bool is_reverse)
{
      Node *tmp = ref_point;

      while (tmp)
      {
            cout << tmp->val << " ";

            if (is_reverse)
                  tmp = tmp->prev;
            else
                  tmp = tmp->next;
      }

      cout << endl;
}

int main()
{
      Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *tail = b;

      head->next = a;
      a->prev = head;
      a->next = b;
      b->prev = a;

      print_the_ll(head, false);

      print_the_ll(tail, true);

      return 0;
}