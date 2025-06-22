class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i=0;i<s.length();i+=k){
           string group= s.substr(i,k);
        

        while(group.length()<k){
            group+=fill;
        }
        ans.push_back(group);
        }
        return ans;
    }
};