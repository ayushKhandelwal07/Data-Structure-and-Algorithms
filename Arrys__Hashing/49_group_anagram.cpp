#include<bits/stdc++.h>
using namespace std;

// input: strs = ["eat","tea","tan","ate","nat","bat"]
// Outpt: [["bat"],["nat","tan"],["ate","eat","tea"]]

vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string, vector<string>> mp;

          for(string str : strs){
            string word  = str; // original
            sort(str.begin(),str.end()); // sorted

            mp[str].push_back(word);           
          }
      vector<vector<string>> ans;

      for(auto str : mp){
            ans.push_back(str.second);
      }
      return ans;
}


int main(){
      vector<string> q = {"eat","tea","tan","ate","nat","bat"};
      vector<vector<string>> ans = groupAnagrams(q);

      for(int i = 0;i < ans.size(); i++){
            for(int j  = 0;j < ans[i].size(); j++){
            cout << ans[i][j] << " " ;
            }
            cout << endl;
      }
      

      return 0;
}