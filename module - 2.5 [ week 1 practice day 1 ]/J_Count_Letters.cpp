#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s;
      cin >> s;

      vector<int> frq(26, 0);

      for (int i = 0; i < s.size(); i++)
            frq[s[i] - 'a']++;

      sort(s.begin(), s.end());

      for (int i = 0; i < s.size(); i++)
      {
            if (frq[s[i] - 'a'])
                  cout << s[i] << " : " << frq[s[i] - 'a'] << endl;

            frq[s[i] - 'a'] = 0;
      }

      return 0;
}