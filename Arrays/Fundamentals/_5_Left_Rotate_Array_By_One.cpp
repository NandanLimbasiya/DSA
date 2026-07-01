#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    void rotateArraybyOne(vector<int> &nums){
      int temp = nums[0];
      int n = nums.size();
      for (int i = 1; i < n; i++){
        nums[i - 1] = nums[i];
      }
      nums[n - 1] = temp;
    }
};

int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 3, 4, 5};

  sol.rotateArraybyOne(nums);

  for(int it : nums){
    cout << it << " ";
  }

  return 0;
}