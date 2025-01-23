#include<bits/stdc++.h>
using namespace std;

// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]

int removeElement(vector<int>& nums, int val) {
      int n = nums.size();
      int ptr = 0;

      for(int i = 0;i < n; i++){
            if(nums[i] != val){
                  swap(nums[i],nums[ptr++]);
            }
      } 
      return ptr;     
}  



int main(){
      vector<int> nums = {3,2,2,2,3};
      cout<< removeElement(nums,3);

      return 0;
}