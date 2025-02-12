#include <bits/stdc++.h>
using namespace std;


//i < j && nums[i] > 2 * nums[j]
// int reversePairs(vector<int>& nums) {
//       int n = nums.size();

//       int ans = 0;

//       for(int i = 0;i < n; i++){
//             for(int j = i + 1; j < n; j++){
//                   if(nums[i] > 2 * nums[j]) ans++;
//             }      
//       }
//       return ans;
// }

void merge(vector<int>& arr, int low, int mid, int high) {
      vector<int> temp; 
      
      int left = low;  
      
      int right = mid + 1; 

      while (left <= mid && right <= high) {
          
          if (arr[left] <= arr[right]) {
              temp.push_back(arr[left]);
              left++;
          } 
          else {
              temp.push_back(arr[right]);
              right++;
              
          }
      }

      while (left <= mid) {
          temp.push_back(arr[left]);
          left++;
      }

      while (right <= high) {
          temp.push_back(arr[right]);
          right++;
      }

      for (int i = low; i <= high; i++) {
          arr[i] = temp[i - low];
      }
  }

int reversePairAns(vector<int> & nums, int low, int mid, int high){
      int right = mid + 1;
      int cnt = 0;

      for(int i = low; i <= mid; i++){
            while(right <= high && nums[i] > 2 * nums[right]) right++;
            cnt += right - (mid + 1);
      }
      
      return cnt;
}

int merge_sort(vector<int> & nums, int low, int high){
      int cnt = 0;

      if(low < high){
            int mid = low + (high-low)/2;

            cnt += merge_sort(nums,low,mid);
            cnt += merge_sort(nums,mid+1,high);
            cnt += reversePairAns(nums,low,mid,high);

            merge(nums,low,mid,high);
      }
      return cnt;
}

int reversePairs(vector<int>& nums) {
      return merge_sort(nums,0,nums.size()-1);
      
}

int main(){
      vector<int> nums = {6, 4, 1, 2, 7};
      cout << reversePairs(nums);

      return 0;
}