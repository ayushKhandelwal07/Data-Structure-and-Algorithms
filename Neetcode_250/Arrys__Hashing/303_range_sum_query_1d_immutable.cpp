#include<bits/stdc++.h>
using namespace std;

// Input
// ["NumArray", "sumRange", "sumRange", "sumRange"]
// [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
// Output
// [null, 1, -1, -3]

class NumArray {
public:
      vector<int> prefix;
    NumArray(vector<int>& nums) {
      prefix.push_back(nums[0]);
      for(int i = 1;i < nums.size(); i++){
            prefix.push_back(prefix[i-1] + nums[i]);
      }
    }
    
    int sumRange(int left, int right) {
      if(left == 0) return prefix[right];

      return prefix[right] - prefix[left-1];
    }
};


int main(){

      vector<int> nums = {-2, 0, 3, -5, 2, -1};
      NumArray* obj = new NumArray(nums);
      cout << obj->sumRange(0, 2) << endl; // Output: 1
      cout << obj->sumRange(2, 5) << endl; // Output: -1
      cout << obj->sumRange(0, 5) << endl; // Output: -3

      delete obj;

      return 0;
}
