class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int maxcount=0;
         int currentcount=0;
         int n = nums.size();
         for(int i=0;i<n;i++){
            if(nums[i]==1){
                currentcount+=nums[i];
                maxcount=max(maxcount,currentcount);
            }
            else{
                currentcount=0;
            }
         }
         return maxcount;
    }
};