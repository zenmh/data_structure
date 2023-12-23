#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tc, x;
      string s;
      queue<string> q;

      cin >> tc;

      while (tc--)
      {
            cin >> x;

            if (!x) // x == 0
            {
                  cin.ignore();
                  cin >> s;

                  q.push(s);
            }
            else // x == 1
            {
                  if (q.empty())
                  {
                        cout << "Invalid" << endl;
                  }
                  else
                  {
                        cout << q.front() << endl;
                        q.pop();
                  }
            }
      }

      return 0;
}