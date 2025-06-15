class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(!isalnum(s[l])) l++;
            else if(!isalnum(s[r])) r--;
            else if(tolower(s[l])!= tolower(s[r])) return false;
            else{
                l++;
                r--;
            }
            
        }
        return true;
    }
};