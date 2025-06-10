class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);  // hash map for all ASCII characters
        int n = s.size();
        int l = 0, r = 0;
        int maxLen = 0;

        while (r < n) {
            // If character has been seen and is inside the current window
            if (hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            // Update last seen index of s[r]
            hash[s[r]] = r;

            // Update the max length of current window
            int len = r - l + 1;
            maxLen = max(maxLen, len);

            r++;
        }

        return maxLen;
    }
};

