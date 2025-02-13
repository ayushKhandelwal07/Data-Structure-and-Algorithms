#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> & nums,int target){
      int n = nums.size();
      int s = 0, e = n - 1,ans = n;
      
      while(s <= e){
            int mid = s + (e - s)/2;

            if(nums[mid] > target) {e = mid - 1; ans = mid;}
            else s = mid + 1;
      }
      return ans;
}


int main(){
      vector<int> nums = {1, 2, 4, 4, 5, 6, 8};
      int target = 4;
      int result = upper_bound(nums, target);
      cout << "The upper bound index for target " << target << " is: " << result << endl;
      return 0;
}