#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1, 2, 3, 4, 5, 6], k = 2
// Output: nums = [3, 4, 5, 6, 1, 2]


void rotateArray(vector<int>& nums, int k) {
      int n = nums.size();
      vector<int> ans;

      k = k % n;

      for(int i = 0;i < n-k; i++){
            ans.push_back(nums[i+k]);
      }

      for(int i = 0;i < k; i++){
            ans.push_back(nums[i]);
      }
      nums = ans;
}



int main(){
      vector<int> nums = {1,2,3,4,5,6};
      rotateArray(nums,2);

      for(int n : nums) cout << n << " ";

      return 0;
}