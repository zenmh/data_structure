#include <bits/stdc++.h>
using namespace std;

void insert_in_min_heap(vector<int> &v, int x) // O(logN)
{
      v.push_back(x);

      int cur_idx = v.size() - 1;

      while (cur_idx != 0)
      {
            int parent_idx = (cur_idx - 1) / 2;
            if (v[parent_idx] > v[cur_idx])
                  swap(v[parent_idx], v[cur_idx]);
            else
                  break;

            cur_idx = parent_idx;
      }
}

void delete_from_min_heap(vector<int> &v) // O(logN)
{
      v[0] = v[v.size() - 1];
      v.pop_back();

      int cur_idx = 0;

      while (1)
      {
            int left_idx = (cur_idx * 2) + 1, right_idx = (cur_idx * 2) + 2, last_idx = v.size() - 1;

            if (left_idx <= last_idx && right_idx <= last_idx)
            {
                  if (v[left_idx] <= v[right_idx] && v[left_idx] < v[cur_idx])
                  {
                        swap(v[left_idx], v[cur_idx]);
                        cur_idx = left_idx;
                  }
                  else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[cur_idx])
                  {
                        swap(v[right_idx], v[cur_idx]);
                        cur_idx = right_idx;
                  }
                  else
                        break;
            }
            else if (left_idx <= last_idx && v[left_idx] < v[cur_idx])
            {
                  swap(v[left_idx], v[cur_idx]);
                  cur_idx = left_idx;
            }
            else if (right_idx <= last_idx && v[right_idx] < v[cur_idx])
            {
                  swap(v[right_idx], v[cur_idx]);
                  cur_idx = right_idx;
            }
            else
                  break;
      }
}

int main()
{
      int n, x;
      vector<int> v;

      cin >> n;

      while (n--)
      {
            cin >> x;

            insert_in_min_heap(v, x);
      }

      delete_from_min_heap(v);

      for (int val : v)
            cout << val << ' ';

      cout << endl;

      delete_from_min_heap(v);

      for (int val : v)
            cout << val << ' ';

      return 0;
}