#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, m, v;
      bool flag = true;
      stack<int> s;
      queue<int> q;

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