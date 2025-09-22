class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       map<int,int> mp;
       int n=nums.size();
       for(auto it :nums){
        mp[it]++;
       } 

       int mini=INT_MIN;
       for(auto it:mp){
        mini=max(mini,it.second);
       }

       //here we have to give sum of frequency
       int cnt=0;
       for(auto it:mp){
        if(mini==it.second)
          cnt+=it.second;
       }
       return cnt;
    }
};