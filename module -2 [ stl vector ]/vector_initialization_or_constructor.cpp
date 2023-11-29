#include <bits/stdc++.h>
using namespace std;

int main()
{
      int N = 5, V = 10, A[N] = {10, 20, 50, 30, 40};

      // Type - 1
      vector<int> v1;    // Construct a vector with 0 elements
      cout << v1.size(); // 0

      // Type - 2
      vector<int> v2(N); // Construct a vector with N elements and the value will be garbage
      for (int i = 0; i < N; i++)
            cout << v2[i] << " "; // 0 0 0 0 0 or garbage values

      // Type - 3
      vector<int> v3(N, V); // Construct a vector with N elements and the value will be V
      for (int i = 0; i < N; i++)
            cout << v3[i] << " "; // 10 10 10 10 10

      // Type - 4
      vector<int> v4(N, 7);
      vector<int> v5(v4); // Construct a vector by copying another vector v4
      for (int i = 0; i < N; i++)
            cout << v5[i] << " "; // 7 7 7 7 7

      // Type - 5
      vector<int> v6(A, A + N); // Construct a vector by copying all elements from an array A of size N
      for (int i = 0; i < N; i++)
            cout << v6[i] << " "; // 10 20 50 30 40

      // Type - 6
      vector<int> v7 = {11, 22, 33, 44, 55};
      for (int i = 0; i < 5; i++)
            cout << v7[i] << " "; // 11 22 33 44 55

      return 0;
}