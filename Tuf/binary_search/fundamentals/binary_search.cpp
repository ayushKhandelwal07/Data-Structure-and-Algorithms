#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> & nums, int target){
      int  n = nums.size();
      
      int s = 0;
      int e = n - 1;
      
      while(s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) e = mid - 1;
            else s = mid + 1;
      }
      return -1;
}

int main(){
      vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      int target = 5;
      int result = binary_search(nums, target);
      
      if(result != -1) {
            cout << "Element found at index: " << result << endl;
      } else {
            cout << "Element not found" << endl;
      }

      return 0;
}