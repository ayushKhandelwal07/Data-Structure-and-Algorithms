#include<bits/stdc++.h>
using namespace std;

//best n
//worsrt and avg n^2

vector<int> insertionSort(vector<int>& nums) {
      int n = nums.size();

      for(int i = 0;i < n; i++){
            int j = i;

            while(j > 0 && nums[j-1] > nums[j]){
                  swap(nums[j-1], nums[j]);
                  j--;
            }
      }
      return nums;
}


int main(){

      vector<int> nums = {64, 25, 12, 22, 11};
      vector<int> sortedNums = insertionSort(nums);

      cout << "Sorted array: ";
      for (int num : sortedNums) {
            cout << num << " ";
      }
      cout << endl;
      

      return 0;
}