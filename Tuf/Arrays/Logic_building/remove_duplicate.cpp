#include<bits/stdc++.h>
using namespace std;

// Input: nums = [0, 0, 3, 3, 5, 6]
// Output: [0, 3, 5, 6, _, _]

int removeDuplicates(vector<int>& nums) {
      int n = nums.size();

      int ptr = 0;

      for(int i = 1;i < n;i++){
            if(nums[i-1] != nums[i]){
                  swap(nums[ptr++],nums[i]);
            }
      }
      return ptr;
}


int main(){

      vector<int> nums = {0, 0, 3, 3, 5, 6};
      int ans = removeDuplicates(nums);

      for(int n : nums) cout << n << " ";

      return 0;
}