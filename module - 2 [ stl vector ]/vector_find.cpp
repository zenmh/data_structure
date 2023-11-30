#include <bits/stdc++.h>
using namespace std;

int main()
{
      // er dara sudu jana jabe given value ta ase naki nei r index dorkar hole loop diya korte hobe

      vector<int> v = {1, 6, 5, 3, 4, 65, 5, 4, 5, 6, 34, 65, 77, 5, 8, 5, 5};

      // Rule - 1
      vector<int>::iterator it1;
      it1 = find(v.begin(), v.end(), 5); // Found --> O(N)

      // Rule - 2
      vector<int>::iterator it2 = find(v.begin(), v.end(), 34); // Found --> O(N)

      // Rule - 3
      auto it3 = find(v.begin(), v.end(), 50); // Not Found --> O(N)

      // cout << *it;

      if (it3 == v.end()) // jodi powya na jay taile it sobar sese obosthan kore
            cout << "Not Found";
      else
            cout << "Found";

      return 0;
}