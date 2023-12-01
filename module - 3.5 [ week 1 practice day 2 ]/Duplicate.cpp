#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, flag = 0;
      cin >> n;

      vector<int> v(n);

      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                  if (v[i] == v[j])
                        flag = 1;

      if (flag)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}