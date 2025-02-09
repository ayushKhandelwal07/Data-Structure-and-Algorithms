#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1, 2, 5, 3, 1, 2]
// Output: [5, 3, 2]


// Time complexity: O(n)
// Space complexity: O(n)
vector<int> leaders(vector<int>& nums) {
      int n = nums.size();

      vector<int> ans;
      ans.push_back(nums[n-1]);

      int curMax = nums[n-1];

      for(int i = n -1;i >=0 ; i--){
            if(nums[i] > curMax){
                  curMax = nums[i];
                  ans.push_back(curMax);
            }
      }
      reverse(ans.begin(),ans.end());
      return ans;
}


int main(){
      vector<int> nums = {1, 2, 5, 3, 1, 2};
      vector<int> result = leaders(nums);

      for(int leader : result) {
            cout << leader << " ";
      }
      cout << endl;

      return 0;     
}