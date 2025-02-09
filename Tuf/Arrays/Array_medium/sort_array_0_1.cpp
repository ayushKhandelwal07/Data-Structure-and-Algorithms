#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1, 0, 2, 1, 0]
// Output: [0, 0, 1, 1, 2]

void sortZeroOneTwo(vector<int>& nums) {
      int n  = nums.size();
      int low = 0, mid = 0, high = n - 1;
      
      while(mid <= high){
            if(nums[mid] == 0){
                  swap(nums[low++],nums[mid++]);
            }else if(nums[mid] == 1){
                  mid++;
            }else{
                  swap(nums[mid],nums[high--]);
            }
      }
}

int main() {
      vector<int> nums = {1, 0, 2, 1, 0};
      sortZeroOneTwo(nums);
      for(int num : nums) {
            cout << num << " ";
      }
      return 0;
}