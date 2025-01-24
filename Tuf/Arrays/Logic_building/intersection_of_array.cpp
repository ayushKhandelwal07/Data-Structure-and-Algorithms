#include<bits/stdc++.h>
using namespace std;

// Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]
// Output: [1, 2, 3, 4, 5, 7]

#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    
    vector<int> ans;
    int i = 0, j = 0;

    while(i < n && j < m) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else { 
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};
    vector<int> result = intersectionArray(nums1, nums2);

    for(int n : result) cout << n << " ";
    return 0;
}
