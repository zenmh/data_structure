class Solution
{
public:
      int maxProduct(vector<int> &v)
      {
            int mx1 = 0, mx2 = 0;

            for (int i = 0; i < v.size(); i++)
            {
                  if (mx1 < v[i])
                  {
                        mx1 = v[i];
                        swap(v[v.size() - 1], v[i]);
                  }
            }

            v.pop_back();

            for (int i = 0; i < v.size(); i++)
            {
                  if (mx2 < v[i])
                        mx2 = v[i];
            }

            return --mx1 * --mx2;
      }
};