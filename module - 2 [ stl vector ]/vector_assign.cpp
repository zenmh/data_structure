#include <bits/stdc++.h>
using namespace std;

int main()
{
      // Assign another vector --> O(N) if sizes are different, O(1) otherwise
      vector<int> v1 = {10, 20, 30};
      vector<int> v2 = {40, 50, 60};
      v2 = v1;

      for (int i = 0; i < v2.size(); i++) // O(1)
            cout << v1[i] << " ";         // 10 20 30

      cout << endl;

      vector<int> v3 = {10, 20, 30};
      vector<int> v4 = {50, 60, 70, 80};
      v3 = v4;

      for (int i = 0; i < v3.size(); i++) // O(N)
            cout << v3[i] << " ";         // 50 60 70 80

      return 0;
}