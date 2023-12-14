#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v;
    list<int> ml;

    while (1)
    {
        cin >> v;

        if (v == -1)
            break;

        ml.push_back(v);
    }

    ml.sort();
    ml.unique();

    for (int x : ml)
        cout << x << " ";

    return 0;
}