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

void insert_at_tail(Node *&head, int value)
{
      Node *new_node = new Node(value);
      Node *tmp = head;

      if (head == NULL)
            head = new_node;
      else
      {
            while (tmp->next)
                  tmp = tmp->next;

            tmp->next = new_node;
      }
}

void print_the_middle_element(Node *head, int cnt)
{
      Node *tmp = head;
      int middle = (cnt / 2) + 1;

      if (cnt % 2)
      {

            for (int i = 1; i < middle; i++)
                  tmp = tmp->next;

            cout << endl
                 << tmp->val << endl;
      }
      else
      {

            for (int i = 1; i < middle - 1; i++)
                  tmp = tmp->next;

            cout << endl
                 << tmp->val;

            tmp = tmp->next;

            cout << " " << tmp->val << endl;
      }
}

int main()
{

      int x, cnt = 0;
      Node *head = NULL;

      while (1)
      {

            cin >> x;

            if (x == -1)
                  break;
            else
            {
                  insert_at_tail(head, x);
                  cnt++;
            }
      }

      print_the_middle_element(head, cnt);

      return 0;
}