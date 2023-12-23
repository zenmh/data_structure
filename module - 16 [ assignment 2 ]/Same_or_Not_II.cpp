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
      int sz = 0;
      Node *head = NULL, *tail = NULL;

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
            Node *delete_node = tail;

            if (sz == 1)
            {
                  head = NULL;
                  tail = NULL;
            }
            else
            {
                  tail = tail->prev;
            }

            delete delete_node;

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
            if (sz == 0)
                  return true;
            else
                  return false;
      }
};

class MyQueue
{
public:
      int sz = 0;
      Node *head = NULL, *tail = NULL;

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
            Node *delete_node = head;

            head = head->next;

            if (!head)
            {
                  tail = NULL;
            }
            else
            {
                  head->prev = NULL;
            }

            delete delete_node;

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
      int n, m, v;
      bool flag = true;
      MyStack s;
      MyQueue q;

      cin >> n >> m;

      if (n != m)
      {
            cout << "NO";
            return 0;
      }

      for (int i = 0; i < n; i++)
      {
            cin >> v;
            s.push(v);
      }

      for (int i = 0; i < m; i++)
      {
            cin >> v;
            q.push(v);
      }

      while (!s.empty())
      {
            if (s.top() != q.front())
            {
                  flag = false;
                  break;
            }

            s.pop();
            q.pop();
      }

      if (flag)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}