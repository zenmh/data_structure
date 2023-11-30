#include <bits/stdc++.h>
using namespace std;

int main()
{
      int q;
      long long n;
      cin >> n >> q;

      long long a[n], pre_sum[n];

      for (int i = 0; i < n; i++)
            cin >> a[i];

      pre_sum[0] = a[0];

      for (int i = 1; i < n; i++)
            pre_sum[i] = a[i] + pre_sum[i - 1];

      while (q--)
      {
            long long l, r, sum;
            cin >> l >> r;
            l--;
            r--;

            if (l)
                  sum = pre_sum[r] - pre_sum[l - 1];
            else
                  sum = pre_sum[r];

            cout << sum << endl;
      }

      return 0;
}