#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, m, x;
      cin >> n;

      vector<int> a(n);

      for (int i = 0; i < n; i++)
            cin >> a[i];

      cin >> m;

      vector<int> b(m);

      for (int i = 0; i < m; i++)
            cin >> b[i];

      cin >> x;

      a.insert(a.begin() + x, b.begin(), b.end());

      int mn = a.size();

      for (int i = 0; i < mn; i++)
            cout << a[i] << " ";

      return 0;
}