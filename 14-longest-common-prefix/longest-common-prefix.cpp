class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // If the array is empty, return an empty string.
        
        // Start with the first string in the array as the initial prefix.
        string prefix = strs[0];
        
        for (int i = 1; i < strs.size(); ++i) {
            // Compare the current string with the prefix
            int j = 0;
            // Find the common prefix between prefix and strs[i]
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                ++j;
            }
            // Update the prefix to the common part found so far
            prefix = prefix.substr(0, j);
            
            // If at any point, the common prefix is empty, return an empty string
            if (prefix.empty()) return "";
        }
        
        return prefix;
    }
};
