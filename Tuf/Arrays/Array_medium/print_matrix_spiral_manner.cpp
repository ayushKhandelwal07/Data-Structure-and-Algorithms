#include<bits/stdc++.h>
using namespace std;

// Input: matrix = [[1, 2, 3], [4 ,5 ,6], [7, 8, 9]]
// Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]


// Time complexity: O(n)
// Space complexity: O(n)
vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();

      int top = 0, bottom = m-1, left = 0,right = n - 1;
      
      vector<int> ans;

      while(top <= bottom && left <= right){
            for(int i = left; i <= right; i++){
                  ans.push_back(matrix[top][i]);
            }
            top++;
            
            for(int i = top; i <= bottom; i++){
                  ans.push_back(matrix[i][right]);
            }
            right--;

            for(int i = right; i >= left; i--){
                  ans.push_back(matrix[bottom][i]);
            }
            bottom--;

            for(int i = bottom; i >= top; i--){
                  ans.push_back(matrix[i][left]);
            }
            left++;
      }
      return ans;
}


int main(){
      vector<vector<int>> matrix = {
            {1, 2, 3, 4},
            {4, 5, 6, 8},
      };

      vector<int> result = spiralOrder(matrix);

      for(int num : result) {
            cout << num << " ";
      }
      cout << endl;

      return 0;
}