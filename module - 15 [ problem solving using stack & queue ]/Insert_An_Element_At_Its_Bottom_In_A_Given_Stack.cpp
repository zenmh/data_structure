#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &s1, int x)
{
      stack<int> s2;

      while (!s1.empty())
      {
            s2.push(s1.top());
            s1.pop();
      }

      s2.push(x);

      while (!s2.empty())
      {
            s1.push(s2.top());
            s2.pop();
      }

      return s1;
}
