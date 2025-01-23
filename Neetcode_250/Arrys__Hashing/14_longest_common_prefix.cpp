#include <bits/stdc++.h>
using namespace std;

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

string longestCommonPrefix(vector<string>& strs) {
      int n = strs.size();
      string ans = "";

      if(n == 0 || n == 1) return strs[0];

      for(int i = 0;i < strs[0].size(); i++){
            char ch = strs[0][i];

            for(int j = 0;j < n; j++){
                  if(strs[j][i] != ch) return ans;
            }
            ans += ch;
      }
      return ans;
}


int main(){
      vector<string> strs = {"flower","flow","flght"};
      cout << longestCommonPrefix(strs);

      return 0;
}