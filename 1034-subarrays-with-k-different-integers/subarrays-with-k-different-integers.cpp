class Solution {
public:
int greaterthanequalk(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int cnt=0;
        map<int,int> mpp;
        int n=nums.size();
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l=l+1;
            }
            cnt=cnt+(r-l+1);
            r=r+1;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int ans=greaterthanequalk(nums,k)-greaterthanequalk(nums,k-1);
       return ans;
    }
};