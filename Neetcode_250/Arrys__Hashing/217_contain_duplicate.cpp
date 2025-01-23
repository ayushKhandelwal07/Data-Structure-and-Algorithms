#include<bits/stdc++.h>
using namespace std;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Input: nums = [1,2,3,1]
// Output: true

// First approach => 
// TC = O(n^2)
// SC = 1

// Second approach => 
// TC = O(n)
// SC = O(n)

// also can use the sorting 
// TC = O(n logn) + n
// SC = 1
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

bool checkDuplicate(vector<int> & nums){
      sort(nums.begin(),nums.end());

      for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]) return true;
      }
      return true;
}

int main(){

      vector<int> q = {1,2,1};
      cout << checkDuplicate(q);
      
      return 0;
}