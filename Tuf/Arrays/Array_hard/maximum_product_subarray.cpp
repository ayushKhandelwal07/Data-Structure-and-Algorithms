#include <bits/stdc++.h>
using namespace std;

// Input: nums = [4, 5, 3, 7, 1, 2]
// Output: 840


//TC O n^2
// int maxProduct(vector<int>& nums) {
//       int n = nums.size();

//       int result = nums[0];

//       for(int i = 0;i < n; i++){
//             int p = nums[i];
//             for(int j = i + 1; j< n; j++){
//                   result = max(result,p);
//                   p *= nums[j];
//             }
//             result = max(result, p);
//       }
//       return result;
// }


//prefix and the suffix
int maxProduct(vector<int>& nums) {
      int n = nums.size();
      
      int pre = 1,suf = 1,ans = 0;

      for(int i = 0;i < n; i++){
            if(pre == 0) pre = 1;
            if(suf == 0) suf = 1;

            pre *= nums[i];
            suf *= nums[n-i-1];

            ans = max(ans , max(pre,suf));
      }
      return ans;
}

int main() {
      vector<int> nums = {4, 5, 3, 7, 1, 2};
      cout << "Maximum product subarray is: " << maxProduct(nums) << endl;
      return 0;
}