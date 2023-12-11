#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Remove an element
    list<int> ml1 = {10, 20, 10, 20, 10, 40};
    ml1.remove(10); // 20 20 40  --> O(N)

    // Sort
    list<int> ml2 = {30, 10, 10, 40, 20, 10, 50, 30};
    ml2.sort();               // 10 10 10 20 30 30 40 50 --> O(NlogN) --> ascending
    ml2.sort(greater<int>()); // 150 40 30 30 20 10 10 10 --> O(NlogN) --> deascending

    // Unique
    list<int> ml3 = {50, 40, 10, 30, 50, 10, 22, 43, 50, 80, 22, 24, 80};
    ml3.unique(); // 50 40 10 30 50 10 22 43 50 80 22 24 80 --> O(N)

    ml3.sort();   // pasapasi na thakle sort korte pare nah
    ml3.unique(); // 10 22 24 30 40 43 50 80  --> O(N) and O(NlogN) for sort

    // Reverse
    list<int> ml4 = {1, 2, 3, 4, 5, 6, 7, 8};
    ml4.reverse(); // 8 7 6 5 4 3 2 1  --> O(N)

    for (int x : ml4)
        cout << x << " ";

    return 0;
}