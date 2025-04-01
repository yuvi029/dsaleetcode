class Solution {
public:
    string largestOddNumber(string s) {
        //string ans="";
        for(int i=s.length()-1;i>=0;i--){
            if((s[i]-'0')%2!=0){
                return s.substr(0,i+1);
             

            }
        }
        return "";
    }
};