#include <bits/stdc++.h>
using namespace std;

int main()
{
      // array shoud be sorted
      int n;
      cin >> n;

      int a[n], l = 0, r = n - 1, mid_index, x, flag = 0;

      for (int i = 0; i < n; i++)
            cin >> a[i];

      while (l <= r) // O(logN)
      {
            cin >> x;

            mid_index = (l + r) / 2;

            if (a[mid_index] == x)
            {
                  flag = 1;
                  break;
            }
            else if (a[mid_index] > x)
                  r = mid_index - 1;
            else
                  l = mid_index + 1;
      }

      if (flag)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}