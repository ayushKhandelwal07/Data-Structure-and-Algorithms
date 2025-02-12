#include<bits/stdc++.h>
using namespace std;


// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
// long long int numberOfInversions(vector<int> nums) {
//       int n = nums.size();

//       long long ans = 0;

//       for(int i = 0;i < n; i++){
//             for(int j = i + 1;j < n; j++){
//                   if(nums[i] > nums[j]) ans++;
//             }
//       }
//       return ans;
// }


long long merge(vector<int> &nums,int low,int mid, int high){
      vector<int> temp;

      int left = low;
      int right = mid + 1;
      
      long long int cnt = 0;


      while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                  temp.push_back(nums[left++]);
            }else{
                  temp.push_back(nums[right++]);
                  cnt += (mid - left + 1);
            }
      }

      while(left <= mid){
            temp.push_back(nums[left++]);
      }
      while(right <= high){
            temp.push_back(nums[right++]);
      }
      for(int i = low; i <= high; i++){
            nums[i] = temp[i-low];
      }
      return cnt;
}

long long merge_sort(vector<int> & nums, int low, int high){
      long long cnt  = 0;

      if(low < high){
            int mid = low + (high - low)/2;

            cnt += merge_sort(nums,low,mid);
            cnt += merge_sort(nums,mid+1,high);
            cnt += merge(nums,low,mid,high);
      }
      return cnt;
}



long long int numberOfInversions(vector<int> nums) {
      int n = nums.size();

      return merge_sort(nums,0,nums.size()-1);
}

int main(){
      vector<int> nums = {2, 3, 7, 1, 3, 5};
      cout << numberOfInversions(nums);

      return 0;
}