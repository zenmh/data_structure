#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> v = {10, 20, 30, 40, 50};

      v.erase(v.begin() + 2); // for erase 3 no element
      for (int x : v)
            cout << x << " "; // 10 20 40 50

      cout << endl;

      v.erase(v.begin() + 2, v.begin() + 4); // for erase multiple element
      v.erase(v.begin() + 2, v.end() - 1);   // for erase multiple element
      for (int x : v)
            cout << x << " "; // 10 20 50

      return 0;
}