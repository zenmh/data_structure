#include <bits/stdc++.h>
using namespace std;

int main()
{
      /*  insert-- > Insert elements at a specific position-- > O(N + K);
       where K is the number of elements to be inserted

       Here -->
       N = hoyto last index projonto jaowa lagte pare for worst case tai N nite hobe
       K = koyta value inset korte hobe seta bujay
       EX. N er value jodi 5 hoy r jodi 100 ta value insert korte hoy tobe time complexity hobe O(N + K) and k er man besi howya e complexity hobe O(K) */

      vector<int> v1 = {1, 2, 3, 4, 5}, v2 = {10, 20, 30, 40, 50};
      // insert a value
      v1.insert(v1.begin() + 3, 111);
      for (int x : v1)
            cout << x << " "; // 1 2 3 111 4 5

      cout << endl;

      // insert a vector or multiple value
      v1.insert(v1.begin() + 3, v2.begin(), v2.end());
      for (int x : v1)
            cout << x << " "; // 1 2 3 10 20 30 40 50 4 5

      return 0;
}