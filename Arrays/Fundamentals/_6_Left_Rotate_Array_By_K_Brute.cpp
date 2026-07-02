#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void rotateArray(vector<int> &nums, int k)
  {
    int n = nums.size();
    k = k % n;

    vector<int> temp;

    for (int i = 0; i < k; i++)
    {
      temp.push_back(nums[i]);
    }

    for (int i = k; i < n; i++)
    {
      nums[i - k] = nums[i];
    }

    for (int i = 0; i < k; i++)
    {
      nums[n - k + i] = temp[i];
    }
  }
};

int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  int k = 3;

  sol.rotateArray(nums, k);

  for (auto it : nums)
  {
    cout << it << " ";
  }
  return 0;
}