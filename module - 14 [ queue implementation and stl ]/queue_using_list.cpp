#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
      list<int> l;

      void push(int val)
      {
            l.push_back(val);
      }
      void pop() { l.pop_front(); }
      int front() { return l.front(); }
      int size() { return l.size(); }
      bool empty() { return l.empty(); }
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
            cout << mq.front() << " ";
            mq.pop();
      }

      return 0;
}