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
      int cnt = 0;
      Node *tmp = head;

      while (tmp)
      {
            tmp = tmp->next;
            cnt++;
      }

      return cnt;
}

void insert_a_node(Node *&head, Node *&tail, int x, int val)
{
      Node *new_node = new Node(val);

      if (head == NULL)
      {
            head = new_node;
            tail = new_node;
      }
      else if (x == 0)
      {
            new_node->next = head;
            head = new_node;
      }
      else
      {
            tail->next = new_node;
            tail = new_node;
      }
}

void delete_a_node(Node *&head, Node *&tail, int pos)
{
      int n = size(head);

      if (pos >= n || head == NULL)
      {
            return;
      }
      else if (pos == 0)
      {
            Node *delete_node = head;

            head = head->next;

            delete delete_node;
      }
      else if (pos == n - 1)
      {
            Node *tmp = head;

            for (int i = 1; i <= n - 2; i++)
                  tmp = tmp->next;

            Node *delete_node = tmp->next;

            tmp->next = NULL;

            // delete tmp->next; // address ta delete hocce nah kn

            tail = tmp;

            delete delete_node;
      }
      else
      {
            Node *tmp = head;

            for (int i = 1; i < pos; i++)
                  tmp = tmp->next;

            Node *delete_node = tmp->next;
            tmp->next = tmp->next->next;

            delete delete_node;
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
      int q, x, v;
      Node *head = NULL, *tail = NULL;

      cin >> q;

      while (q--)
      {
            cin >> x >> v;

            if (x == 0 || x == 1)
                  insert_a_node(head, tail, x, v);
            else
                  delete_a_node(head, tail, v);

            print_the_ll(head);
      }

      return 0;
}