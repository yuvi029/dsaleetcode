class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int len=0;
        bool find=false;
        //trim string
        // trim(s);
        for(int ch=n-1;ch>=0;ch--){
             if(s[ch]!=' '){
                len++;
                find=true;
             }
             else if(find){
                break;
             }
        }
        return len;
    }
};