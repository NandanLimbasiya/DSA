#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int maxConsecutiveOnes(vector<int> &nums){
      int cnt = 0;
      int maxi = 0;

      for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
          cnt++;
          maxi = max(maxi, cnt);
        }else{
          cnt = 0;
        }
      }
      return maxi;
    }
};

int main()
{
  Solution sol;

  vector<int> nums = {1, 1, 0, 1, 1, 1};

  int ans = sol.maxConsecutiveOnes(nums);
  cout << ans;
  return 0;
}