#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> v = {10, 20, 30, 40, 50};

      // AAccess the ith element
      cout << v[2] << endl // 30
           << v.at(1);     // 20

      // Access the first element
      cout << v[0] << endl // 10
           << v.front();   // 10

      // Access the last element
      cout << v[v.size() - 1] << endl // 50
           << v.back();               // 50

      return 0;
}