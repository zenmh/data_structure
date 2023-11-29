#include <bits/stdc++.h>
using namespace std;

int main()
{
      // Way - 1
      vector<int> v1;

      int n, a;
      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> a;
            v1.push_back(a);
      }

      for (int b : v1)
            cout << b << " ";

      // Way - 2
      int m;
      cin >> m;
      vector<int> v2(m);

      for (int i = 0; i < m; i++)
            cin >> v2[i];

      for (int x : v2)
            cout << x << " ";

      return 0;
}