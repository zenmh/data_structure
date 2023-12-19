#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, v;
      stack<int> s1, s2;

      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> v;
            s1.push(v);
      }

      while (!s1.empty())
      {
            s2.push(s1.top());
            s1.pop();
      }

      while (!s2.empty())
      {
            cout << s2.top() << " ";
            s2.pop();
      }

      return 0;
}