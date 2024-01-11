#include <bits/stdc++.h>
using namespace std;

int main()
{
      set<int> s;
      int n, x;

      cin >> n;

      while (n--) // O(NlogN)
      {
            cin >> x;

            s.insert(x); // O(logN)
      }

      for (auto it = s.begin(); it != s.end(); it++)
            cout << *it << ' ';

      cout << endl
           << s.count(10) << endl  // O(logN)
           << s.count(90) << endl; // O(logN)

      return 0;
}