#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
      list<int> l;

      void push(int val)
      {
            l.push_back(val);
      }
      void pop()
      {
            l.pop_back();
      }
      int top()
      {
            return l.back();
      }
      int size()
      {
            return l.size();
      }
      bool empty()
      {
            if (l.size() > 0)
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