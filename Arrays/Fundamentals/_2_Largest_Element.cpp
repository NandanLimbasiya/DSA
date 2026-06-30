#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int largestElement(vector<int> &nums){
      int maxi = nums[0];
      for (int i = 1; i < nums.size();i++){
        maxi = max(maxi, nums[i]);
      }
      return maxi;
    }
};

int main()
{
  Solution sol;
  vector<int> nums = {3, 2, 1, 5, 2};

  int largest = sol.largestElement(nums);
  cout << largest << endl;
  //Inbuilt func for max element in cpp
  cout << *max_element(nums.begin(),nums.end());

  

  return 0;
}