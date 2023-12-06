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

      if (head == NULL)
      {
            head = new_node;
      }

      else
      {
            Node *tmp = head;

            while (tmp->next != NULL)
            {
                  tmp = tmp->next;
            } // enhon tmp last node a

            tmp->next = new_node;
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
      Node *head = NULL;

      while (1) // 1 is a truethy value
      {
            cout << "Press 1 To Insert One At Tail" << endl
                 << "Press 2 To Print The Linked List" << endl
                 << "Press 3 To Terminate The Program" << endl;

            int option;
            cin >> option;

            if (option == 1)
            {
                  int value;

                  cout << "Enter A Value: ";
                  cin >> value;

                  insert_at_tail(head, value);
            }
            else if (option == 2)
            {
                  print_the_ll(head);
            }
            else if (option == 3)
            {
                  break;
            }
      }

      return 0;
}