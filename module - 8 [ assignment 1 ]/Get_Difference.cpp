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
            tail->next = new_node;
            tail = new_node;
      }
}

void dif(Node *head)
{
      int mn = INT_MAX, mx = INT_MIN;
      Node *tmp = head;

      while (tmp)
      {
            if (tmp->val < mn)
                  mn = tmp->val;
            if (tmp->val > mx)
                  mx = tmp->val;

            tmp = tmp->next;
      }

      cout << abs(mx - mn);
}

int main()
{
      int val;
      Node *head = NULL, *tail = NULL;

      while (1)
      {
            cin >> val;

            if (val == -1)
                  break;
            else
                  insert_at_tail(head, tail, val);
      }

      dif(head);

      return 0;
}