#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, ls = 0, ms;
      cin >> n;

      ms = n - 2;
      int mid = ++n / 2;

      for (int i = 1; i < n; i++)
      {
            if (i != mid)
            {
                  for (int j = 0; j <= ls; j++)
                        if (j > 0)
                              cout << " ";

                  if (i < mid)
                        cout << "\\";
                  else
                        cout << "/";

                  for (int j = 0; j <= ms; j++)
                        if (j > 0)
                              cout << " ";

                  if (i < mid)
                        cout << "/" << endl;
                  else
                        cout << "\\" << endl;

                  if (i < mid)
                  {
                        ls++;
                        ms -= 2;
                  }
                  else
                  {
                        ls--;
                        ms += 2;
                  }
            }
            else
            {
                  for (int i = 0; i < (n / 2) - 1; i++)
                        cout << " ";

                  cout << "X" << endl;

                  ms = 1;
                  ls--;
            }
      }

      return 0;
}