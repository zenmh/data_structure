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

class MyStack
{
public:
      Node *head = NULL, *tail = NULL;
      int sz = 0;

      void push(int val)
      {
            Node *new_node = new Node(val);

            if (!head)
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

            sz++;
      }
      void pop()
      {
            Node *del_node = tail;

            if (sz == 1)
            {
                  head = NULL;
                  tail = NULL;
            }
            else
            {
                  tail = tail->prev;
            }

            delete del_node;

            sz--;
      }
      int top()
      {
            return tail->val;
      }
      int size()
      {
            return sz;
      }
      bool empty()
      {
            if (sz > 0)
                  return false;
            else
                  return true;
      }
};

int main()
{
      MyStack ms;

      int n, x;
      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> x;
            ms.push(x);
      }

      while (!ms.empty())
      {
            cout << ms.top() << " ";
            ms.pop();
      }

      return 0;
}