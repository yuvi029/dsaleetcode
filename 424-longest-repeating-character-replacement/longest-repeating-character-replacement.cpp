class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int n=s.size();
        int hash[26]={0};
        int maxf=0;
        int maxlen=0;
        int changes;

        while(r<n){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            changes=(r-l+1)-maxf;
            if(changes>k){
                hash[s[l]-'A']--;
                // maxf=0;
                // for(int i=0;i<26;i++){
                // maxf=max(maxf,hash[i]);
                
                // }
                l++;
            }
                if(changes<=k){
                    maxlen=max(maxlen,r-l+1);
                }
            
            r++;
        }
        return maxlen;
    }
};