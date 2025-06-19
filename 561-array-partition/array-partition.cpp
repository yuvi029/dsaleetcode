class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i=i+2){
            int mini=min(nums[i],nums[i+1]);
            sum=sum+mini;
        }
        return sum;
    }
};