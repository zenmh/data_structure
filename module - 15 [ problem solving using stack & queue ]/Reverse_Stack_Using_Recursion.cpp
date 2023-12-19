// Option - 1
void reverseStack(stack<int> &s1)
{
      stack<int> s2;

      if (s1.empty())
            return;

      int x = s1.top();
      s1.pop();

      reverseStack(s1);

      while (!s1.empty())
      {
            s2.push(s1.top());
            s1.pop();
      }

      s2.push(x);

      while (!s2.empty())
      {
            s1.push(s2.top());
            s2.pop();
      }
}

// Option - 2
void reverseStack(stack<int> &s1)
{
      stack<int> s2;

      while (!s1.empty())
      {
            s2.push(s1.top());
            s1.pop();
      }

      s1 = s2;
}