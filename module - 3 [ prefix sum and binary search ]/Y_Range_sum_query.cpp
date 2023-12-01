#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, q;
      cin >> n >> q;

      int a[n];

      for (int i = 0; i < n; i++) // O(N)
            cin >> a[i];

      while (q--) // O(Q * N)
      {
            int l, r, sum = 0;
            cin >> l >> r;
            l--;
            r--;
            for (l; l <= r; l++) // O(N) --> couse 1 ≤ L ≤ R ≤ N
                  sum += a[l];

            cout << sum << endl;
      }

      return 0;
}