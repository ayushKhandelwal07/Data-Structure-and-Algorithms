#include<bits/stdc++.h>
using namespace std;

//avg and best n logn
// worsr n^2

int partition(vector<int> &nums,int low, int high){
      int pivot = nums[low];

      int i = low;
      int j = high;

      while(i < j){
            while(nums[i] <= pivot && i <= high-1){ i++;}
            while(nums[j] >= pivot && j >= low+1){ j--;}{
                  if(i < j) swap(nums[i],nums[j]);
            }
      }
      swap(nums[low],nums[j]);
      return j;
}

void quick_sort(vector<int> &nums,int low,int high){
      if(low < high){

            int p = partition(nums,low,high);
            quick_sort(nums,low,p-1);
            quick_sort(nums,p+1,high);
      }
}


int main(){

      vector<int> nums = {55,43,2,1,90};

      quick_sort(nums,0,nums.size()-1);
      for (int num : nums) {
            cout << num << " ";
      }

      return 0;
}