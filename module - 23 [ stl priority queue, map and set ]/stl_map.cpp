#include <bits/stdc++.h>
using namespace std;

int main()
{
      map<string, int> m;

      m["abir"] = 66;
      m["evan"] = 79;
      m["chan"] = 59;

      for (auto it = m.begin(); it != m.end(); it++)
            cout << it->first << ' ' << it->second << endl;

      return 0;
}