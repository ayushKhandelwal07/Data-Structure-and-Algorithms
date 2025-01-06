#include <bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();

      unordered_map<int,int> mp;

      for(int i = 0;i < n; i++){
            int complement = target - nums[i];

            if(mp.find(complement) != mp.end()){
                  return {mp[complement], i};
            }
            mp[nums[i]] = i;
      }
      return {-1,-1};
}

int main(){
      vector<int> q = {2,15,7,11};
      vector<int> ans = twoSum(q,9);

      cout << ans[0] << " "<< ans[1];

      return 0;
}