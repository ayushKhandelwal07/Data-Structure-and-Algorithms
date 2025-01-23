#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
      int hashSet[26] = {0};

      int a = s.size();
      int b = t.size();

      if(a != b) return false;

      for(int i  = 0;i < a; i++){
            hashSet[s[i]]++;
            hashSet[t[i]]--;
      }
      for(int n : hashSet){
            if(n!=0) return false;
      }
      return true;
}

int main(){

      string str = "anagram", t = "nagaram";
      cout << isAnagram(str,t);

      return 0;
}