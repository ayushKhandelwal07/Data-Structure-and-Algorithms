#include <bits/stdc++.h>
using namespace std;

// Input: nums = [3, 5, 4, 1, 1]
// Output: [1, 2]

// Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.

// can find the reapeating number using the hashmap 

vector<int> findMissingRepeatingNumbers(vector<int> nums) {
              int n = nums.size();
              
              int hashSet[n + 1] = {0};
              int missing = -1,repeating = -1;
      
              for(int i = 0;i < n; i++){
                  hashSet[nums[i]]++;
              }
      
              for(int i = 1;i <= n; i++){
                  if(hashSet[i] == 2){
                      repeating = i;
                  }else if(hashSet[i] == 0){
                      missing = i;
                  }
                  if(repeating != -1 && missing != -1) break;
              }
              return {repeating, missing};
          }
int main(){
      vector<int> nums = {3, 5, 4, 1, 1};
      vector<int> result = findMissingRepeatingNumbers(nums);
      
      cout << "Repeating number: " << result[0] << endl;
      cout << "Missing number: " << result[1] << endl;
      return 0;
}