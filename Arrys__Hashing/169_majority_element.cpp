#include<bits/stdc++.h>
using namespace std;


// Input: nums = [3,2,3]
// Output: 3

//using brute force
//tc = n^2
//sc = 1
// int majorityElement(vector<int>& nums) {
//       int n = nums.size();

//       for(int i = 0;i < n; i++){
//             for(int j = i + 1;j < n; j++){
//                   if(nums[i] == nums[j]) return nums[i];
//             }
//       }
//       return -1;
// }

//using hashmap
//tc = n
//sc = n
// int majorityElement(vector<int>& nums) {
//       int n = nums.size();

//       unordered_map<int,int> mp;
//       for(int num : nums) mp[num]++;
//       for(auto it : mp) if(it.second >= 2) return it.first;
//       return -1;
// }

// Moore’s Voting Algorithm:
//tc = n
//sc = 1

int majorityElement(vector<int>& nums) {
      int n = nums.size();

      int cnt = 0;
      int el;

      for(int i = 0;i < n; i++){
            if(cnt == 0){
                  cnt = 1;
                  el = nums[i];
            }else if(nums[i] == el) cnt++;
            else cnt--;
      }

      int cnt1 = 0;
      for(int i = 0;i < n; i++){
            if(nums[i] == el) cnt1++;
      }

      return (cnt1 >= n/2) ? el : -1;

}

int main(){
      vector<int> nums = {1,2,1,2,2};
      cout << majorityElement(nums);

      return 0;
}