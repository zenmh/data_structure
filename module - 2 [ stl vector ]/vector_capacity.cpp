#include <bits/stdc++.h>
using namespace std;

int main()
{
      // size --> Returns the size of the vector --> O(1)
      vector<int> v1(5);
      cout << v1.size(); // --> O(1)

      // max_size --> Returns the maximum size that the vector can hold --> O(1)
      vector<int> v2;
      cout << v2.max_size(); // 536870911 --> O(1)

      // capacity --> Returns the current available capacity of the vector -- >push_back korle capacity 2x kore bare and cagerta ses na howya porjonto capacity baray nah --> O(1)
      vector<int> v3;
      cout << v3.capacity() << endl; // 0
      v3.push_back(10);
      cout << v3.capacity() << endl; // 1
      v3.push_back(20);
      cout << v3.capacity() << endl; // 2
      v3.push_back(30);
      cout << v3.capacity() << endl; // 4
      v3.push_back(40);
      cout << v3.capacity() << endl; // 4
      v3.push_back(50);
      cout << v3.capacity() << endl; // 8
      v3.push_back(60);
      cout << v3.capacity() << endl; // 8

      // clear --> Clears the vector elements. Do not delete the memory, only clear the value --> O(N)
      vector<int> v4 = {11, 22, 33, 44, 55};
      cout << v4.size() << endl; // 5
      v4.clear();
      cout << v4.size() << endl;
      cout << v4[0] << " " << v4[4]; // 11 55 --> it only clear the size to 0 not delete the values

      // empty --> Return true/false if the vector is empty or not --> O(1)
      vector<int> v5 = {1, 2, 3, 3, 2, 1};
      cout << v5.empty() << endl; // 0 means (flase) --> O(1)
      vector<int> v6;
      cout << v6.empty() << endl; // 1 means (true) --> O(1)

      // resize --> Change the size of the vector --> O(K); where K is the difference between new size and current size
      vector<int> v7 = {4, 5, 2, 1, 3};
      cout << v7.size() << endl; // 5
      v7.resize(2);
      cout << v7.size() << endl; // 2
      v7.resize(7);
      for (int i = 0; i < v7.size(); i++)
            cout << v7[i] << " "; // 4 5 0 0 0 0 0
      cout << endl;
      v7.resize(10, 100);
      for (int i = 0; i < v7.size(); i++)
            cout << v7[i] << " "; // 4 5 0 0 0 0 0 100 100 100

      return 0;
}