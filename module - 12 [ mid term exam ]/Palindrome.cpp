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

int main()
{
      int v;
      Node *head = NULL, *tail = NULL;

      while (1)
      {
            cin >> v;

            if (v == -1)
                  break;

            insert_at_tail(head, tail, v);
      }

      bool flag = true;
      Node *i = head, *j = tail;

      while (i != j && i->next != j)
      {
            if (i->val != j->val)
                  flag = false;

            i = i->next;
            j = j->prev;
      }

      if (i->val != j->val)
            flag = false;

      if (flag)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}