#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

vector<int> topKFrequent(vector<int>& nums, int k) {
      int n = nums.size();

      unordered_map<int,int> mp;

      for(int num: nums) mp[num]++;

      vector<vector<int>> bucket(n+1);
      for(auto it = mp.begin(); it != mp.end(); it++){
            bucket[it->second].push_back(it->first);
      }

      vector<int> result;
      for(int i = n;i >= 0; i--){

            if(!bucket[i].empty()){
                result.insert(result.end(), bucket[i].begin(), bucket[i].end());
            }

            if(result.size() >= k) break;
      }
      result.resize(k);
      return result;      
}



int main(){
      vector<int> nums = {1,2,2,3,4};
      int k = 3;
      vector<int> result = topKFrequent(nums, k);

      for (int num : result) {
            cout << num << " ";
      }

      return 0;
}