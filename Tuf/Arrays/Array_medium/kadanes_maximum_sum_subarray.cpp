#include<bits/stdc++.h>
using namespace std;

//TC n
//SC 1
int maxSubArray(vector<int>& nums) {
      int n = nums.size();

      int sum = 0, ans = INT_MIN;
      for(int i = 0;i < n; i++){
            sum += nums[i];

            ans = max(ans , sum);
            if(sum <= 0) sum = 0;
      }
      return ans;
}
int main() {
      vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
      int result = maxSubArray(nums);
      cout << "Maximum sum of subarray: " << result << endl;
      return 0;
}