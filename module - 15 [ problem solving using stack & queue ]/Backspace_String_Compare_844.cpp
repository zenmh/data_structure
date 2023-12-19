class Solution
{
public:
      bool backspaceCompare(string s, string t)
      {
            stack<char> s1, s2;

            for (int c : s)
            {
                  if (c != '#')
                  {
                        s1.push(c);
                  }
                  else
                  {
                        if (!s1.empty())
                        {
                              s1.pop();
                        }
                  }
            }

            for (int c : t)
            {
                  if (c != '#')
                  {
                        s2.push(c);
                  }
                  else
                  {
                        if (!s2.empty())
                        {
                              s2.pop();
                        }
                  }
            }

            return s1 == s2;
      }
};