#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ml = {10, 20, 30};

    ml.erase(next(ml.begin(), 2));

    for (int x : ml)
        cout << x << " ";

    return 0;
}