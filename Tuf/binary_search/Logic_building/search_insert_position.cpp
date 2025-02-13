#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)  {
      int n = nums.size();
      
      int s = 0;
      int e = n - 1;

      while (s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] >= target) e = mid - 1;
            else s = mid + 1;
      }
      return s;     
}
int main() {
      vector<int> nums = {1,2, 3, 5, 6};
      int target = 5;
      int result = searchInsert(nums, target);
      cout << "The insert position is: " << result << endl;
      return 0;
}