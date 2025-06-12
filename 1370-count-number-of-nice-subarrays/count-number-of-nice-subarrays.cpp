class Solution {
public:
int yuvi(vector<int>& nums, int k){
        int l=0;
        int r=0;
        int sum=0;
        int cnt=0;
        int n=nums.size();
        while(r<n){
            if(nums[r]%2==0){
                sum=sum+0;
            }
            else{
                sum=sum+1;
            }
            while(sum>k){
                if(nums[l]%2==0){
                    sum=sum-0;
                }
                else{
                    sum=sum-1;
                }
                l=l+1;
            }
            cnt=cnt+(r-l+1);
            r=r+1;
        }
        return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
     int ans=yuvi(nums,k)-yuvi(nums,k-1);
     return ans;
    }
};