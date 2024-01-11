#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s, word;
      map<string, int> m;

      getline(cin, s);

      stringstream ss(s);

      while (ss >> word)
            m[word]++;

      for (auto it = m.begin(); it != m.end(); it++)
            cout << it->first << " = " << it->second << endl;

      return 0;
}