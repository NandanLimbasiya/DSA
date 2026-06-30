#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int linearSearch(vector<int> &nums, int target){
      for (int i = 0; i < nums.size(); i++){
        if(nums[i] == target)
          return i;
      }
      return -1;
    }
};

int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 3, 4, 5};
  int target = 2;

  int result = sol.linearSearch(nums, target);
  cout << result;

  return 0;
}