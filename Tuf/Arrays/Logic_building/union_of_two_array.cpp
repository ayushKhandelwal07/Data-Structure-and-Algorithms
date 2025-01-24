#include<bits/stdc++.h>
using namespace std;

// Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]
// Output: [1, 2, 3, 4, 5, 7]

#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    
    vector<int> ans;
    int i = 0, j = 0;

    while(i < n && j < m) {
        if (nums1[i] < nums2[j]) {
            if (ans.empty() || ans.back() != nums1[i]) ans.push_back(nums1[i]);
            i++;
        } else if (nums1[i] > nums2[j]) {
            if (ans.empty() || ans.back() != nums2[j]) ans.push_back(nums2[j]);
            j++;
        } else {  // nums1[i] == nums2[j], add only once
            if (ans.empty() || ans.back() != nums1[i]) ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    while(i < n) {
        if (ans.empty() || ans.back() != nums1[i]) ans.push_back(nums1[i]);
        i++;
    }

    while(j < m) {
        if (ans.empty() || ans.back() != nums2[j]) ans.push_back(nums2[j]);
        j++;
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};
    vector<int> result = unionArray(nums1, nums2);

    for(int n : result) cout << n << " ";
    return 0;
}



int main(){

      vector<int> nums1 = {1, 2, 3, 4, 5};
      vector<int> nums2 = {1, 2, 7};
      vector<int> result = unionArray(nums1, nums2);

      for(int n : result) cout << n << " ";
      return 0;
}