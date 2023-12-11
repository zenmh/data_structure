#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ml = {10, 20, 30, 40, 50};

    cout << ml.size() << endl; // 5

    cout << ml.max_size() << endl; // 178956970 for windows

    ml.clear();
    cout << ml.size() << endl; // 0

    cout << ml.empty() << endl; // if 1(true) empty / else 0(flase) not empty 

    ml.resize(3); // 10 20 30 
    ml.resize(8); // 10 20 30 0 0 0 0 0 
    ml.resize(10, 100); // 10 20 30 0 0 0 0 0 100 100 

    for (int x : ml) cout << x << " ";

    return 0;
}