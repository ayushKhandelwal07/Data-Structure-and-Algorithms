#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

void rotateArray(vector<int>& nums, int k) {
      int n = nums.size();
      vector<int> ans(n);

      k = k % n;
      for(int i = 0;i < n; i++){
            ans[(i+k) % n] = nums[i];
      }
      nums = ans;     
}



int main(){
      vector<int> nums = {1,2,3,4,5,6,7};
      rotateArray(nums,3);

      for(int n : nums) cout << n << " ";

      return 0;
}