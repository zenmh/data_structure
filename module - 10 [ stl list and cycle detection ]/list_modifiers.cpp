#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ml1 = {10, 20, 30, 40, 50};
    list<int> ml2 = ml1; // 10 20 30 40 50 

    ml2.push_back(60); // 10 20 30 40 50 60 
    ml2.push_front(05); // 5 10 20 30 40 50 60 

    ml2.pop_back(); // 5 10 20 30 40 50 
    ml2.pop_front(); // 10 20 30 40 50 

    // Insert
    list<int> ml3 = {1, 2, 3, 4, 5};
    ml3.insert(next(ml3.begin(), 2), 100); // 10 20 100 30 40 50 
    ml3.insert(next(ml3.begin(), 3), {200, 300, 400, 500}); // 10 20 100 200 300 400 500 30 40 50
    ml3.insert(next(ml3.begin(), 3), 100); // 1 2 3 100 4 5 
    ml3.insert(next(ml3.begin(), 0), 100); // 100 1 2 3 4 5 
    ml3.insert(next(ml3.begin(), 5), 100); // 1 2 3 4 5 100 
    ml3.insert(next(ml3.begin(), 6), 100); // 100 1 2 3 4 5 --> gure chole ase
    ml3.insert(next(ml3.begin(), 8), 100); // 1 2 100 3 4 5  --> gure chole ase
    list<int> ml4 = {11, 22, 33, 44};
    ml3.insert(next(ml3.begin(), 3), ml4.begin(), ml4.end()); // 1 2 3 11 22 33 44 4 5 
    vector<int> v = {10, 20, 30, 40};
    ml3.insert(next(ml3.begin(), 3), v.begin(), v.end()); // 1 2 3 10 20 30 40 4 5 

    // Delete
    list<int> ml5 = {100, 200, 300, 400, 500, 600, 700, 800, 900 , 1000};
    ml5.erase(next(ml5.begin(), 3)); // 100 200 300 500 600 700 800 900 1000 
    ml5.erase(next(ml5.begin(), 3), next(ml5.begin(), 7)); // 100 200 300 800 900 1000 

    // Replace
    list<int> ml6 = {1, 2, 3, 2, 3, 2, 2, 2, 17, 6};
    replace(ml6.begin(), ml6.end(), 2, 200); // 1 200 3 200 3 200 200 200 17 6 

    // Find
    list<int> ml7 = {10, 20, 30, 40, 50};
    auto it = find(ml7.begin(), ml7.end(), 60);
    if(it != ml7.end()) cout << "Found"; // for 10, 20, 30, 40, 50
    else cout << "Not Found"; // for others

    for (int x : ml6 ) cout << x << " ";

    return 0;
}