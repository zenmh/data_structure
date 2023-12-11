#include <bits/stdc++.h>
using namespace std;

int main()
{
      list<int> ml1; // O(1)
      cout << ml1.size() << endl;

      list<int> ml2(10); // O(N) --> It makes 10 node with garbase value

      list<int> ml3(5, 100); // O(N) --> It makes 10 node with value 100

      for (auto it = ml3.begin(); it != ml3.end(); it++) // it++ goes to next node internally
            cout << *it << " ";

      list<int> ml4(ml3); // O(N)
      for (int val : ml4)
            cout << val << " ";

      int n = 5, a[n] = {10, 20, 30, 40, 50};
      list<int> ml5(a, a + n);

      vector<int> v = {100, 200, 300, 400, 500};
      list<int> ml6(v.begin(), v.end());

      return 0;
}
