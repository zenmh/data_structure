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

class MyQueue
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
            Node *del_node = head;
            head = head->next;

            if (!head)
            {
                  tail = NULL;
            }
            else
            {
                  head->prev = NULL;
            }

            delete del_node;

            sz--;
      }
      int front()
      {
            return head->val;
      }
      int size()
      {
            return sz;
      }
      bool empty()
      {
            if (sz == 0)
                  return true;
            else
                  return false;
      }
};

int main()
{
      MyQueue mq;
      int n, x;
      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> x;
            mq.push(x);
      }

      while (!mq.empty())
      {
            cout << mq.front() << endl;
            mq.pop();
      }

      return 0;
}