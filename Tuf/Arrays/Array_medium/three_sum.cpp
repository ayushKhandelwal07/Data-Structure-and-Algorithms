#include<bits/stdc++.h>
using namespace std;

// i != j, i != k, and j != k
// nums[i] + nums[j] + nums[k] == 0

// Input: nums = [2, -2, 0, 3, -3, 5]
// Output: [[-2, 0, 2], [-3, -2, 5], [-3, 0, 3]]

vector<vector<int>> threeSum(vector<int>& nums) {
      int n = nums.size();

      sort(nums.begin(),nums.end());
      vector<vector<int>> ans;

      for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i + 1;
            int k = n - 1;

            while(j < k){
                  int sum = nums[i] + nums[j] + nums[k];

                  if(sum > 0){
                        k--;
                  }else if(sum < 0){
                        j++;
                  }else{
                        ans.push_back({nums[i],nums[j],nums[k]});
                        j++;

                        while(nums[j] == nums[j-1] && j < k){
                              j++;
                        }
                  }
            }
      }
      return ans;
}
      

      int main() {
            vector<int> nums = {2, -2, 0, 3, -3, 5};
            vector<vector<int>> result = threeSum(nums);

            for (const auto& triplet : result) {
                  for (int num : triplet) {
                        cout << num << " ";
                  }
                  cout << endl;
            }

            return 0;
      }