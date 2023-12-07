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

void insert_at_tail_with_track(Node *&head, Node *&tail, int value) // O(1)
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

void print_the_linked_list(Node *head) // O(N)
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

      int x;
      Node *head = NULL, *tail = NULL;

      while (1) // O(N)
      {
            cin >> x;

            if (x == -1)
                  break;
            else
                  insert_at_tail_with_track(head, tail, x);
      }

      print_the_linked_list(head);

      return 0;
}