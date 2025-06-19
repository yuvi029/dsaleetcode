class Solution {
public:
bool ispallindrome(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--]) return false;
    }
    return true;
}
void helper(int index,string s,vector<string>& path,vector<vector<string>>&ans){
    if(index==s.size()){
        ans.push_back(path);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(ispallindrome(s,index,i)){
        path.push_back(s.substr(index,i-index+1));
        helper(i+1,s,path,ans);
        path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string> path;
        vector<vector<string>> ans;
        helper(0,s,path,ans);
        return ans;
    }
};