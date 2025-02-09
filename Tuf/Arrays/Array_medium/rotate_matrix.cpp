#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
      int n = matrix.size();
      vector<vector<int>> temp(n,vector<int>(n,0));

      for(int i = 0; i < n; i++){
            for(int j = 0;j < n; j++){
                  temp[j][n-i-1] = matrix[i][j];
            }
      }

      for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix.size(); j++){
                matrix[i][j] = temp[i][j];
            }
      }
}

// just swap(nums[i][j], nums[j][i]);
// for(1 to n) reverse(nums[i].begin(), nums[i].end());
int main(){
      vector<vector<int>> matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
      };

      rotateMatrix(matrix);

      for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                  cout << matrix[i][j] << " ";
            }
            cout << endl;
      }

      return 0;
}