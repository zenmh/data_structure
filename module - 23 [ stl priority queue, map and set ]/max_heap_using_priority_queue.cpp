#include <bits/stdc++.h>
using namespace std;

int main()
{
      priority_queue<int, vector<int>, greater<int>> pq; // O{logN}

      while (1) // O(NlogN)
      {
            int x, v;

            cin >> x;

            if (x == 0)
                  pq.pop();
            else if (x == 1)
            {
                  cin >> v;
                  pq.push(v);
            }
            else if (x == 2)
                  cout << pq.top() << endl;
            else
                  break;
      }

      return 0;
}