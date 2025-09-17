class Solution {
public:
    int findLHS(vector<int>& nums) {
        //difference between max value and min value is 1()
        int n=nums.size();
        sort(nums.begin(),nums.end()); //o(nlogn)
       //take low and high pointer at zero
       int ans=0;
       int left=0;
       for(int rgt=0;rgt<n;rgt++){   //o(n)
        while(nums[rgt]-nums[left]>1) left++;  
       
       //if shrinks atmost 1......... while until its valid 
         
         if(nums[rgt]-nums[left]==1) {
               ans=max(ans,rgt-left+1);
       }
       }
       return ans;
    }
};