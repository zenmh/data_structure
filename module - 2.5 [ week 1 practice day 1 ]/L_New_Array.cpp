#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;

      vector<int> a(n), b(n);

      for (int i = 0; i < n; i++)
            cin >> a[i];

      for (int i = 0; i < n; i++)
            cin >> b[i];

      vector<int> c(b);

      c.insert(c.end(), a.begin(), a.end());

      for (int x : c)
            cout << x << " ";

      return 0;
}