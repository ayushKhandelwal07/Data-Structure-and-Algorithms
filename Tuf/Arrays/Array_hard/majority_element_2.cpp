#include<bits/stdc++.h>
using namespace std;

//can use the hashmap and check if mp.second >= ans;
//TC n
//SC n

//other approach
// Moore majority vote algorithm

vector<int> majorityElementTwo(vector<int>& nums) {
      int n = nums.size();

      int cnt1 = 0,cnt2 = 0;
      int el2,el1;

      for(int i = 0;i < n; i++){
            if(cnt1 == 0 && nums[i] != el2 ){
                  cnt1 = 1;
                  el1 = nums[i];
            }else if(cnt2 == 0 && nums[i] != el1){
                  cnt2 = 1;
                  el2 = nums[i];
            }else if(nums[i] == el1){
                  cnt1++;
            }else if(nums[i] == el2){
                  cnt2++;
            }else{
                  cnt1--;cnt2--;
            }
      }

      cnt1 = 0, cnt2 = 0;
      for(int i = 0;i < n; i++){
            if(nums[i] == el1) cnt1++;
            if(nums[i] == el2) cnt2++;
      }

      int mini = n / 3 + 1;
      
      vector<int> ans;

      if(cnt1  >= mini) ans.push_back(el1);
      if(cnt2  >= mini) ans.push_back(el2);

      return ans;

}


int main() {
      vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};
      vector<int> result = majorityElementTwo(nums);
      
      cout << "Majority elements are: ";
      for (int num : result) {
            if (num != -1) {
                  cout << num << " ";
            }
      }
      cout << endl;

      return 0;
}