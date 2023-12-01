#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;

      vector<long long> v(n), prefix_sum(n);

      for (int i = 0; i < n; i++)
            cin >> v[i];

      prefix_sum[0] = v[0];
      for (int i = 1; i < n; i++)
            prefix_sum[i] = prefix_sum[i - 1] + v[i];

      reverse(prefix_sum.begin(), prefix_sum.end());

      for (int i = 0; i < n; i++)
            cout << prefix_sum[i] << " ";

      return 0;
}