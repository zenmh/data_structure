#include <bits/stdc++.h>
using namespace std;

int main()
{
      int q, x, v;
      list<int> ml;

      cin >> q;

      while (q--)
      {
            cin >> x >> v;

            int sz = ml.size();

            if (x == 0)
            {
                  ml.push_front(v);
            }
            else if (x == 1)
            {
                  ml.push_back(v);
            }
            else if (x == 2 && sz > v)
            {
                  ml.erase(next(ml.begin(), v));
            }

            cout << "L -> ";

            for (int y : ml)
            {
                  cout << y << " ";
            }

            cout << endl
                 << "R -> ";

            for (auto it = ml.rbegin(); it != ml.rend(); it++)
            {
                  cout << *it << " ";
            }

            cout << endl;
      }

      return 0;
}
