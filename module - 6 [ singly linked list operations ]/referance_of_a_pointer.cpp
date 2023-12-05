#include <bits/stdc++.h>
using namespace std;

void fun(int *&ptr) // like this parameter is called reference of a pointer
{
      cout << &ptr << endl; // 0x61ff08
      // ptr = NULL;
      // cout << &ptr << endl; // 0x61fef0 for int *ptr
}

int main()
{
      int value = 10;
      int *ptr = &value;

      fun(ptr);

      cout << &ptr; // 0x61ff08

      // cout << ptr; // for this [ ptr = NULL; ] line output will be 0

      // cout << &ptr; // 0x61ff08

      return 0;
}