#include<bits/stdc++.h>
using namespace std;

int secondLarget(vector<int> &nums)
{
      int n = nums.size();

      int largest = -1,secondLarget = -1;

      for(int i = 0;i < n;i ++){
            if(nums[i] > largest){
                  secondLarget = largest;
                  largest = nums[i];
            }else if(nums[i] > secondLarget && nums[i] != largest){
                  secondLarget = nums[i];
            }
      }
      return secondLarget;
}

int main(){
      vector<int> nums = {1,2,3,4,5};

      cout << secondLarget(nums);

      return 0;
}