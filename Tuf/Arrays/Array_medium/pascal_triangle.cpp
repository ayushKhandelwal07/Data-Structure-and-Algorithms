#include<bits/stdc++.h>
using namespace std;

// Input: numRows = 4
// Output: [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1]]

//varient one printting only one element
//formula =>       nCr = n! / r! * (n - r)!
//can minimize to  nCr = n*(n-1)..(n-r)! / r! * (n-r)! 
// nCr = n*(n-1).. / r!

// int nCrEl(int n,int r){
//       int res = 1;

//       for(int i = 0;i < r; i++){
//             res = res * (n-i);
//             res = res / (i+1);
//       }
//       return res;
// }

// void rowPrint(int n){
//       for(int i = 1;i <= n; i++){
//             cout << nCrEl(n-1,i-1) << " " ;
//       }
//       cout << endl;
// }


vector<int> rowGen(int row){
      long long ans = 1;
      vector<int> ansRow;

      ansRow.push_back(1);

      for(int col = 1; col < row; col++){
            ans = ans * (row - col) / col;
            ansRow.push_back(ans);
      }
      return ansRow;      
}

vector<vector<int>> pascalTriangle(int numRows) {
      vector<vector<int>> ans;

      for(int i = 1;i <= numRows; i++){
            ans.push_back(rowGen(i));
      }
      return ans;
}

int main(){ 
      int numRows = 4;
      vector<vector<int>> result = pascalTriangle(numRows);

      for (const auto& row : result) {
            for (int val : row) {
                  cout << val << " ";
            }
            cout << endl;
      }
 
      return 0;
}