#include<bits/stdc++.h>
using namespace std;


// Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]

vector<int> getConcatenation(vector<int>& nums) {
      int n = nums.size();

      for(int i = 0;i < n; i++){
            nums.push_back(nums[i]);
      }
      return nums;
}

int main(){

      vector<int> q = {1,2,1};
      vector<int> ans = getConcatenation(q);
      
      for(int n : ans) cout << n << " ";

      return 0;
}