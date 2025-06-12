class Solution {
public:
    int yuvraj(vector<int>& nums,int goal){
         int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int cnt=0;

        if(goal<0) return 0;
        while(r<n){
            sum=sum+nums[r];
            while(sum>goal){
                sum=sum-nums[l];
                l=l+1;
            }
            cnt=cnt+(r-l+1);
            r=r+1;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans= yuvraj(nums,goal)-yuvraj(nums,goal-1);
        return ans;
    }
};