#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      string name;
      int marks, roll;
      Student(string name, int marks, int roll)
      {
            this->name = name;
            this->marks = marks;
            this->roll = roll;
      }
};

class cmp
{
public:
      bool operator() // it's called operator overloded
          (Student a, Student b)
      {
            return a.marks < b.marks;

            if (a.marks == b.marks)
                  return a.roll < b.roll;
      }
};

int main()
{
      string name;
      int n, marks, roll;
      priority_queue<Student, vector<Student>, cmp> pq;

      cin >> n;

      while (n--)
      {
            cin >> name >> marks >> roll;

            Student st(name, marks, roll);

            pq.push(st);
      }

      while (!pq.empty())
      {
            Student top = pq.top();

            cout << top.name << ' ' << top.marks << ' ' << top.roll << endl;

            pq.pop();
      }

      return 0;
}