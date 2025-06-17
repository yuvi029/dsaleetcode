class Solution {
public:
    void helper(int i,vector<int>&arr, vector<vector<int>>& ans,vector<int>& ds,int target){
         int n=arr.size();
         if(i==n){
            if(target==0){
                ans.push_back(ds);
            }
            return;
         }
         if(arr[i]<=target){
            ds.push_back(arr[i]);
            helper(i,arr,ans,ds,target-arr[i]);
            ds.pop_back();
         }
         helper(i+1,arr,ans,ds,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
           int index;
           vector<vector<int>> ans;
           vector<int> ds;
           helper(0,candidates,ans,ds,target);
           return ans;
    }
};