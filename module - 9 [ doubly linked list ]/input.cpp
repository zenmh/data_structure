
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
      Node *head = NULL, *tail = NULL;

      int val;
      while (1)
      {
            cin >> val;

            if (val == -1)
                  break;
            else
                  insert_at_tail(head, tail, val);
      }

      print_the_ll(head, false); // forword
      print_the_ll(tail, true);  // reverse

      return 0;
}