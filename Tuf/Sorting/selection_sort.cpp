#include<bits/stdc++.h>
using namespace std;

//time complexity: O(n^2) for all cases
//space complexity: O(1)

vector<int> selectionSort(vector<int>& nums) {
      int n = nums.size();

      for (int i = 0;i < n; i++){
            int mini = i;

            for(int j = i + 1;j < n; j++){
                  if(nums[j] < nums[mini]){
                        mini = j;
                  }
            }
            if(mini != i) swap(nums[i], nums[mini]);
      }
      return nums;
}

int main(){
      
      vector<int> nums = {64, 25, 12, 22, 11};
      vector<int> sortedNums = selectionSort(nums);

      cout << "Sorted array: ";
      for (int num : sortedNums) {
            cout << num << " ";
      }
      cout << endl;

      return 0;
}