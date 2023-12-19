#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, v;
      stack<int> s;
      queue<int> q1, q2;

      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> v;
            q1.push(v);
      }

      while (!q1.empty())
      {
            s.push(q1.front());
            q1.pop();
      }

      while (!s.empty())
      {
            q2.push(s.top());
            s.pop();
      }

      while (!q2.empty())
      {
            cout << q2.front() << " ";
            q2.pop();
      }

      return 0;
}