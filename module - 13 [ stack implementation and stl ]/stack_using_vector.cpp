#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
      vector<int> v;

      void push(int val)
      {
            v.push_back(val);
      }
      void pop()
      {
            v.pop_back();
      }
      int top()
      {
            return v.back();
      }
      int size()
      {
            return v.size();
      }
      bool empty()
      {
            if (v.size() > 0)
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