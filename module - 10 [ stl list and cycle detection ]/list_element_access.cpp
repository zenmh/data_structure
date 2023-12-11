#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ml = {10, 20, 30, 40, 50, 60, 70, 80};

    // Access first element
    cout << ml.front() << endl; // 10 --> O(1)

    // Access last element
    cout << ml.back() << endl; // 80 --> O(1)

    // Access any position
    cout << *next(ml.begin(), 3) << endl; // 40 --> O(N)

    return 0;
}