#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;

      for (int i = 0; i < n; i++) // O(N*N) --> it can be O(N*M)
            for (int j = 0; j < n; j++)
                  cout << "Test" << endl;

      for (int i = 1; i < n - 1; i++) // O(N*N)
            for (int j = i + 1; j < n; j++)
            {
                  // selection sort
            }

      return 0;
}