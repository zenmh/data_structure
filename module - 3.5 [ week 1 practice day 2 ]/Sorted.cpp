#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tc;
      cin >> tc;

      while (tc--)
      {
            int n, flag = 1;
            cin >> n;

            vector<int> v(n);

            for (int i = 0; i < n; i++)
                  cin >> v[i];

            for (int i = 0; i < n - 1; i++)
                  if (v[i] > v[i + 1])
                  {
                        flag = 0;
                        break;
                  }

            flag ? cout << "YES" << endl : cout << "NO" << endl;
      }

      return 0;
}