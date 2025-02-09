#include<bits/stdc++.h>
using namespace std;

//TC n^3
//SC 1
vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n = nums.size();
      vector<vector<int>> ans;

      for(int i = 0;i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            for(int j = i + 1; j < n; j++){
                  if(j > i + 1 && nums[j] == nums[j-1]) continue;

                  int k = j + 1;
                  int l = n - 1;

                  while(k < l){
                        int sum = nums[i] + nums[j] + nums[k] + nums[l];

                        if(sum > 0){
                              l--;
                        }else if(sum < 0){
                              k++;
                        }else if(sum == target){
                              ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                              k++;
                              l--;
                              while(k < l && nums[k] == nums[k-1]) k++;
                              while(k < l && nums[l] == nums[l+1]) l--;
                        }
                  }
            }
      }
      return ans;
}


int main(){
      vector<int> nums = {1, 0, -1, 0, -2, 2};
      int target = 0;
      vector<vector<int>> result = fourSum(nums, target);

      for (const auto& quad : result) {
            for (int num : quad) {
                  cout << num << " ";
            }
            cout << endl;
      }

      return 0;
}