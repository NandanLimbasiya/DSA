#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int sLargest(vector<int> &nums){
      int n = nums.size();
      if(n < 2)
        return -1;

      int largest = INT_MIN;
      int slargest = INT_MIN;

      for(int i = 0; i < n; i++){
        if(nums[i] > largest){
          slargest = largest;
          largest = nums[i];
        }else if(nums[i] > slargest && nums[i] != largest){
          slargest = nums[i];
        }
      }

      return slargest == INT_MIN ? -1 : slargest;
    }
};

int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 4, 7, 7, 5};

  int slargest = sol.sLargest(nums);
  cout << slargest;

  return 0;
}