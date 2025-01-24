#include<bits/stdc++.h>
using namespace std;

// Input: nums = [0, 1, 4, 0, 5, 2]
// Output: [1, 4, 5, 2, 0, 0]

void moveZeroes(vector<int>& nums) {
      int n = nums.size();

      int ptr = 0;

      for(int i = 0;i < n;i++){
            if(nums[i] != 0){
                  swap(nums[i],nums[ptr++]);
            }
      }
}

int main(){
      vector<int> nums = {0, 1, 4, 0, 5, 2};
      moveZeroes(nums);

      for(int n : nums) cout << n << " ";


      return 0;
}