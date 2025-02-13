#include <bits/stdc++.h>
using namespace std;

vector<int> getFloorAndCeil(vector<int> nums, int x) {
   int n = nums.size();
   int s = 0, e = n - 1;
   vector<int> ans(2,-1);

   while(s <= e){
      int mid = s + (e - s)/2;

      if(nums[mid] <= x){ ans[0] = mid; s = mid + 1; }
      else e = mid - 1;
   }

   s = 0;e = n - 1;

   while(s <= e){
      int mid = s + (e - s)/2;

      if(nums[mid] >= x){ ans[1] = mid; e = mid - 1; }
      else s = e + 1;
   }
   return ans;   
}


int main() {
      vector<int> nums = {1, 2, 8, 10, 10, 12, 19};
      int x = 5;
      vector<int> result = getFloorAndCeil(nums, x);
      cout << "Floor: " << (result[0] != -1 ? nums[result[0]] : -1) << ", Ceil: " << (result[1] != -1 ? nums[result[1]] : -1) << endl;
      return 0;
}