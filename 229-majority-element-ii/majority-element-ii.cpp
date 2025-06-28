class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
       // int cnt=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]) cnt++;
              //  if(cnt>n/3) ans.push_back(nums[i]);
            }
            if(cnt>n/3 && find(ans.begin(),ans.end(),nums[i])==ans.end()){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};