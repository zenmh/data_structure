#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> v1, v2 = {11, 22, 33, 44, 55, 66};
      // push_back --> O(1)
      v1.push_back(10);
      cout << v1.size() << endl; // 1
      v1.push_back(20);
      cout << v1.size() << endl; // 2
      v1.push_back(30);
      cout << v1.size() << endl; // 3
      v1.push_back(40);
      cout << v1.size() << endl; // 4
      v1.push_back(40);
      cout << v1.size() << endl; // 5

      // pop_back --> O(1)
      cout << v2.size() << endl; // 6
      v2.pop_back();
      cout << v2.size() << endl; // 5
      v2.pop_back();
      cout << v2.size() << endl; // 4
      v2.pop_back();
      cout << v2.size() << endl; // 3

      return 0;
}