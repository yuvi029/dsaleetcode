class Solution {
public:
    void helper(int index,vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans){
        int n=nums.size();
        ans.push_back(ds);
        for(int i=index;i<n;i++){
            if(i!=index && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            helper(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(0,nums,ds,ans);
        return ans;
    }
};