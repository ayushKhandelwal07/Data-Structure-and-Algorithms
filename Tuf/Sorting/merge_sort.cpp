#include<bits/stdc++.h>
using namespace std;

// all cases n logn

void merge(vector<int> &nums,int low,int mid,int high){
      vector<int> ans;
      int left = low;
      int right = mid + 1;

      while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                  ans.push_back(nums[left++]);
            }else{
                  ans.push_back(nums[right++]);
            }
      }

      while(left <= mid){
            ans.push_back(nums[left++]);
      }

      while(right <= high){
            ans.push_back(nums[right++]);
      }
}

void merge_Sort(vector<int> &nums,int low,int high){
      if(low >= high) return;

      int mid = (low+high)/2;

      merge_Sort(nums,low,mid);
      merge_Sort(nums,mid+1,high);
      merge(nums,low,mid,high);      
}

vector<int> mergeSort(vector<int> &nums){

      int n = nums.size();
      merge_Sort(nums,0,n-1);
      return nums;
}


int main(){

      vector<int> nums = {64, 25, 12, 22, 11};
      vector<int> sortedNums = mergeSort(nums);

      cout << "Sorted array: ";
      for (int num : sortedNums) {
            cout << num << " ";
      }
      cout << endl;

      return 0;
}