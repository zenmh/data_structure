#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tc;
      string s;
      stack<char> st;

      cin >> tc;

      while (tc--)
      {
            cin >> s;

            for (char c : s)
            {
                  if (!st.empty() && c != st.top())
                  {
                        st.pop();
                  }
                  else
                  {
                        st.push(c);
                  }
            }

            if (st.empty())
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;

            while (!st.empty())
            {
                  st.pop();
            }
      }

      return 0;
}