#include<bits/stdc++.h>
using namespace std;

// Worst-Case Time Complexity: O(n²)
// Average Time Complexity: O(n²)
// Best-Case Time Complexity: O(n).

vector<int> bubbleSort(vector<int>& nums) {
      int n = nums.size();

      for(int i = n-1; i >= 1; i--){
            for(int j = 0;j <= i-1; j++){
                  if(nums[j] > nums[j+1]){
                        swap(nums[j] , nums[j+1]);
                  }
            }
      }
      return nums;
}



int main(){

      vector<int> nums = {64, 25, 12, 22, 11};
      vector<int> sortedNums = bubbleSort(nums);

      cout << "Sorted array: ";
      for (int num : sortedNums) {
            cout << num << " ";
      }
      cout << endl;

      return 0;
}