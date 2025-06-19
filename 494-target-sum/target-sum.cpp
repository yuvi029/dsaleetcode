class Solution {
public:
    void helper(int index,vector<int>&nums,vector<int>&ds,int sum,int target,int& cnt){
        if(index==nums.size()){
            if(sum==target) cnt++;
            return ;
        }
       // ds.push_back(nums[ind]);
        helper(index+1,nums,ds,sum+nums[index],target,cnt);
       // ds.pop_back();
       // ds.push_back(-nums[ind]);
        helper(index+1,nums,ds,sum-nums[index],target,cnt);
       
       
    
    }
    int findTargetSumWays(vector<int>& nums, int target) {
       int cnt=0;
       vector<int>ds;
       helper(0,nums,ds,0,target,cnt);
       return cnt;   
    }
};