#include <bits/stdc++.h>

int clac_sum(stack<int> s)
{
      int sum = 0;

      while (!s.empty())
      {
            sum += s.top();
            s.pop();
      }

      return sum;
}

int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3)
{
      int sum1 = clac_sum(s1), sum2 = clac_sum(s2), sum3 = clac_sum(s3);

      while (1)
      {
            if (sum1 == sum2 && sum2 == sum3)
                  break;

            if (sum1 >= sum2 && sum1 >= sum3)
            {
                  sum1 -= s1.top();
                  s1.pop();
            }
            else if (sum2 >= sum1 && sum2 >= sum3)
            {
                  sum2 -= s2.top();
                  s2.pop();
            }
            else
            {
                  sum3 -= s3.top();
                  s3.pop();
            }
      }

      return sum1;
}