#include<bits/stdc++.h>
using namespace std;

int maximumConsecutiveOne(vector<int> nums){
      int n = nums.size();

      int ans = 0,cnt = 0;

      for(int i = 0;i < n; i++){
            if(nums[i] == 1){
                  cnt++;
            }else{
                  cnt = 0;
            }
            ans = max(ans, cnt);
      }
      return ans;

}

int main(){
      vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0};

      cout << maximumConsecutiveOne(nums);


      return 0;
}