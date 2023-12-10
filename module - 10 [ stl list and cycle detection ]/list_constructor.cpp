#include <bits/stdc++.h>
using namespace std;

int main()
{
      list<int> ml1; // O(1)
      cout << ml1.size() << endl;

      list<int> ml2(5, 100); // O(N)

      for (auto it = ml2.begin(); it != ml2.end(); it++) // it++ goes to next node internally
            cout << *it << " ";

      return 0;
}
