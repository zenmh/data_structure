#include <bits/stdc++.h>
using namespace std;

int main()
{
      int x;
      cin >> x;

      while (x > 0) // O(logN)
      {
            int digit = x % 10;
            cout << digit << endl;
            x /= 10;
      }

      cout << endl;

      for (int i = 1; i <= 100; i *= 2) // O(logN)
            cout << i << endl;

      return 0;
}