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

            tail = tail->prev;

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

int main()
{
      int n, m, v;
      MyStack s1, s2;

      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> v;
            s1.push(v);
      }

      cin >> m;

      for (int i = 0; i < m; i++)
      {
            cin >> v;
            s2.push(v);
      }

      if (n != m)
      {
            cout << "NO";
            return 0;
      }

      bool flag = true;

      while (!s1.empty())
      {
            if (s1.top() != s2.top())
            {
                  flag = false;
                  break;
            }

            s1.pop();
            s2.pop();
      }

      if (flag)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}