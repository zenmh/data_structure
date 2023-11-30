#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> v = {10, 20, 30, 40, 50};

      // vector<int>::iterator it;

      for (auto it = v.begin(); it < v.end(); it++) // O(1)
            cout << *it << " ";                     // 10 20 30 40 50

      return 0;
}