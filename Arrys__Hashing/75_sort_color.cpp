#include<bits/stdc++.h>
using namespace std;

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
//dutch nationl flag problem

//sort
//tc = nlogn
//sc = 1

//count
//tc = n
//sc = 1

//dutch flag algo
//tc = n
//sc = 1

void sortColors(vector<int>& nums) {
      int low = 0;
      int mid = 0;
      int high = nums.size()-1;

      while(mid <= high){
            if(nums[mid] == 0){
                  swap(nums[low++],nums[mid++]);
            }else if(nums[mid] == 1) mid++;
            else{
                  swap(nums[mid],nums[high--]);
            }
      }
}


int main(){
      vector<int> nums = {2,0,2,1,1,0};
      sortColors(nums);
      for(int n : nums) cout << n << " ";

      return 0;
}
