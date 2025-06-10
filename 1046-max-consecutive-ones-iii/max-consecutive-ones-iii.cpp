class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int maxsum=0;
        int zeroes=0;
        int n=nums.size();
        while(right<n){
            if(nums[right]==0)  zeroes++;
            while (zeroes>k){
                   if(nums[left]==0) {
                        zeroes--;
                     
                    }
                    left++;
            }
             if(zeroes<=k){
                int len=right-left+1;
                maxsum=max(len,maxsum);
                
            right++;
             }
        }
        //right++;
        return maxsum;
    }
};