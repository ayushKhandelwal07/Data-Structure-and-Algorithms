#include<bits/stdc++.h>
using namespace std;

//Input: ["neet","code","love","you"]
// Output:["neet","code","love","you"]
//4#neet4#code4#love3#you


string encode(vector<string>& strs) {
      int n = strs.size();

      string ans = "";
      for(string& str : strs){
            ans += to_string(str.size()) + "#" + str;
      }
      return ans;
}

vector<string> decode(string s) {
      vector<string> ans;

      int i = 0;

      while(i < s.size()){
            int j = i;

            while(s[j] != '#') j++;

            int len = stoi(s.substr(i , j - i));
            i = j + 1;
            j = i + len;
            ans.push_back(s.substr(i,len));
            i = j;
      }
      return ans;
}

int main(){

      vector<string> strs = {"neet", "code", "love", "you"};
      string encoded = encode(strs);
      cout << "Encoded: " << encoded << endl;

      vector<string> decoded = decode(encoded);
      cout << "Decoded: ";
      for (const string& str : decoded) {
            cout << str << " ";
      }
      cout << endl;

      return 0;
}