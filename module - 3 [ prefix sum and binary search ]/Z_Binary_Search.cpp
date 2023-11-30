#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, q, x;
      cin >> n >> q;

      int a[n];

      for (int i = 0; i < n; i++)
            cin >> a[i];

      while (q--)
      {
            cin >> x;
            bool flag = false;

            for (int i = 0; i < n; i++)
                  if (a[i] == x)
                  {
                        flag = true;
                  }

            if (flag)
                  cout << "found" << endl;
            else
                  cout << "not found" << endl;
      }

      return 0;
}