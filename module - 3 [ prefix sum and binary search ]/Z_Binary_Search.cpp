#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, q, x;
      cin >> n >> q;

      int a[n];

      for (int i = 0; i < n; i++) // O(N)
            cin >> a[i];

      sort(a, a + n); // O(NlogN)

      while (q--) // O(Q)
      {
            cin >> x;
            bool flag = false;
            int l = 0, r = n - 1;

            while (l <= r) // O(logN)
            {
                  int mid = (l + r) / 2;

                  if (a[mid] == x)
                  {
                        flag = true;
                        break;
                  }
                  else if (a[mid] > x)
                        r = --mid;
                  else
                        l = ++mid;
            }

            if (flag)
                  cout << "found" << endl;
            else
                  cout << "not found" << endl;
      }

      return 0;
}