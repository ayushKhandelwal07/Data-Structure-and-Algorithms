#include <bits/stdc++.h>
using namespace std;

// the value at that index is greater than or equal to a given key i.e. x./
int lower_bound(vector<int> & nums,int target){
      int n = nums.size();
      int s = 0, e = n - 1,ans = n;
      
      while(s <= e){
            int mid = s + (e - s)/2;

            if(nums[mid] >= target) {e = mid - 1; ans = mid;}
            else if(nums[mid] < target) s = mid + 1;
      }
      return ans;
}

int main(){
      vector<int> nums = {1, 2, 4, 4, 5, 6, 8};
      int target = 4;
      int index = lower_bound(nums, target);
      cout << "The lower bound index of " << target << " is " << index << endl;
      return 0;      
}