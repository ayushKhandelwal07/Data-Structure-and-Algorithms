#include<bits/stdc++.h>
using namespace std;


//SC = n
//TC = n
vector<int> twoSum(vector<int> & nums, int target){
      unordered_map<int,int> mp;

      int n = nums.size();

      for(int i = 0;i < n; i++){

            int complement = target - nums[i];

            if(mp.find(complement) != mp.end()){
                  return{ -1 , mp[complement]};
            }

            mp[nums[i]] = i;
      }
      return {-1, -1};
}