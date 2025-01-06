#include<bits/stdc++.h>
using namespace std;


// 'Input Format:  N = 6, array[] = {11,33,33,11,33,11}
// Result:
//  11 33

vector<int> majorityElement(vector<int>& nums) {
      int n = nums.size();
      int cnt=0,cnt1=0,el=INT_MIN,el1=INT_MIN;


      for(int i = 0;i < n; i++){
            if(cnt == 0 && nums[i] != el1){
                  cnt = 1;
                  el = nums[i];
            }else if(cnt1 == 0 && nums[i] != el){
                  cnt1 = 1;
                  el1 = nums[i];
            }else if(nums[i] == el) cnt++;
            else if(nums[i] == el1) cnt1++;
            else {cnt--; cnt1--;}
      }

      cnt = 0,cnt1 = 0;

      for(int i = 0;i < n; i++){
            if(nums[i] == el) cnt++;
            if(nums[i] == el1) cnt1++;
      }
      vector<int> ans;

      int mini = (n/3);
      if(cnt > mini ) ans.push_back(el);
      if(cnt1 > mini) ans.push_back(el1);
      
      return ans;
}

int main(){
      vector<int> nums = {11,33,33,11,33,11};
      vector<int> ans = majorityElement(nums);
      for(int n : ans) cout << n << " ";

      return 0;
}

