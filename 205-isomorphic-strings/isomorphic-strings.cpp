class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int> mp;
       
        map<char,int> mpp;

        // for( auto ch: s ){
        //     mp[ch]++;
        // }
    
        // for( auto ch2 : t){
        //     mpp[ch2]++;
        // }
        for(int i=0;i<s.length();i++){
            char ch1=s[i];
            char ch2=t[i];

            //mp.count means if ch1 exists in map it must be mapped to ch2
       if(mp.count(ch1)) {
        if(mp[ch1]!=ch2)  return false;
       }

       if(mpp.count(ch2)) {
        if(mpp[ch2]!=ch1)  return false;
       }

       mp[ch1]=ch2;
       mpp[ch2]=ch1;

        }
 


return true;

    }
};