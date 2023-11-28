#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, sum = 0;
      cin >> n;

      int a[n];

      for (int i = 0; i < n; i++) // O(N)
            cin >> a[i];

      for (int i = 0; i < n; i++) // O{N}
            sum += a[i];

      cout << sum;

      return 0;
}