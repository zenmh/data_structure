#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> v = {1, 6, 5, 3, 4, 65, 5, 4, 5, 6, 34, 65, 77, 5, 8, 5};
      replace(v.begin(), v.end(), 5, 500); // O(N)

      for (int x : v)
            cout << x << " ";

      return 0;
}