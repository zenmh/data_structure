#include <bits/stdc++.h>
using namespace std;

int main()
{
      map<string, int> m;

      m["abir"] = 66; // O(logN)
      m["evan"] = 79;
      m["chan"] = 59;

      for (auto it = m.begin(); it != m.end(); it++)
            cout << it->first << ' ' << it->second << endl; // O(logN)

      if (m["Abir"])
            cout << "YES";
      else
            cout << "NO";

      return 0;
}