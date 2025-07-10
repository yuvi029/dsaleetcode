class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int n = nums1.size();
        int m = nums2.size();

        // Step 1: Get all common elements (with duplicates)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {
                    arr.push_back(nums1[i]);
                    break; // optional: to avoid multiple counts of same element
                }
            }
        }

        // Step 2: Remove duplicates using a set
        unordered_set<int> seen;
        vector<int> res;

        for (int i = 0; i < arr.size(); i++) {
            if (seen.find(arr[i]) == seen.end()) {
                seen.insert(arr[i]);
                res.push_back(arr[i]);
            }
        }

        return res;
    }
};
