#include<bits/stdc++.h>
using namespace std;

// Input : nums = [2, 4, 5, -1, -3, -4]
// Output : [2, -1, 4, -3, 5, -4]

vector<int> rearrangeArray(vector<int>& nums) {
      int n = nums.size();

      vector<int> ans(n,0);

      int pos = 0,neg = 1;

      for(int i = 0;i < n; i++){
            if(nums[i] < 0){
                  ans[neg] = nums[i];
                  neg+=2;
            }else{
                  ans[pos] = nums[i];
                  pos+=2;
            }
      }
      return ans;
}


int main(){
      vector<int> nums = {-4, 4, -4, 4, -4, 4};
      vector<int> ans = rearrangeArray(nums);
      
      for(int n : ans) cout << n << " ";

      return 0;
}