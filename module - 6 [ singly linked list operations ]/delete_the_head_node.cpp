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

void insert_at_head(Node *&head, int value)
{
      Node *new_node = new Node(value);

      new_node->next = head;
      head = new_node;

      cout << value << " Inserted At Head" << endl
           << endl;
}

void insert_at_position(Node *head, int pos, int value)
{
      Node *new_node = new Node(value);
      Node *tmp = head;

      for (int i = 1; i < pos; i++)
      {
            tmp = tmp->next;
      }

      new_node->next = tmp->next;
      tmp->next = new_node;

      cout << value << " Inserted At Position " << pos << endl
           << endl;
}

void insert_at_tail(Node *&head, int value)
{
      Node *new_node = new Node(value);

      if (head == NULL)
            head = new_node;
      else
      {
            Node *tmp = head;
            while (tmp->next != NULL)
                  tmp = tmp->next;
            // enhon tmp last node a
            tmp->next = new_node;
      }
}

void delete_the_head_node(Node *&head)
{
      Node *delete_node = head;

      head = head->next;

      delete delete_node;

      cout << "Head Node Deleted" << endl
           << endl;
}

void delete_a_node(Node *head, int position)
{
      Node *tmp = head;

      for (int i = 1; i < position; i++)
            tmp = tmp->next;

      Node *delete_node = tmp->next;

      tmp->next = tmp->next->next;

      delete delete_node;
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

      while (1)
      {
            cout << "Press 1 To Insert One At Tail" << endl
                 << "Press 2 To Print The Linked List" << endl
                 << "Press 3 To Insert A Value At A Position" << endl
                 << "Press 4 To Insert A Value At Head" << endl
                 << "Press 5 To Delete A Node With Position" << endl
                 << "Press 6 To Delete The Head Node" << endl
                 << "Press 7 To Terminate The Program" << endl;

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
                  print_the_ll(head);
            else if (option == 3)
            {
                  int position, value;

                  cout << "Enter The Position: ";
                  cin >> position;
                  cout << "Enter The Value: ";
                  cin >> value;

                  if (position == 0)
                        insert_at_head(head, value);
                  else
                        insert_at_position(head, position, value);
            }
            else if (option == 4)
            {
                  int value;

                  cout << "Enter The Value: ";
                  cin >> value;

                  insert_at_head(head, value);
            }
            else if (option == 5)
            {
                  int position;

                  cout << "Enter The Position Of Node: ";
                  cin >> position;

                  if (position == 0)
                        delete_the_head_node(head);
                  else
                        delete_a_node(head, position);
            }
            else if (option == 6)
                  delete_the_head_node(head);
            else
                  break;
      }

      return 0;
}