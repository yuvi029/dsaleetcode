class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;

        for(int a=0;a<n;a++){
             if(a>maxi) return false;
             maxi=max(maxi,a+nums[a]);
        }
        return true;
    }
};