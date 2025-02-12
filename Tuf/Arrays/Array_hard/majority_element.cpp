#include<bits/stdc++.h>
using namespace std;


//can use the hashmap and check if mp.second >= ans;
//TC n
//SC n

//other approach
// Moore majority vote algorithm

int majorityElement(vector<int> & nums){
      int n = nums.size();
      
      int el;
      int cnt = 0;

      for(int i = 0;i < n; i++){
            if(cnt == 0){
                  cnt = 1;
                  el = nums[i];
            }else if(nums[i] == el){
                  cnt++;
            }else{
                  cnt--;
            }
      }

      int cnt1 = 0;
      for(int i = 0;i < n; i++) if(nums[i] == el) cnt1++;

      return  (cnt1 > n/2) ?  el : -1;

}
int main() {
      vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
      int result = majorityElement(nums);
      if (result != -1) {
            cout << "The majority element is " << result << endl;
      } else {
            cout << "There is no majority element." << endl;
      }
      return 0;
}