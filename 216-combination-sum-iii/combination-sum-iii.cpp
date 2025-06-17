class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& ds,int sum,int index,int k,int n){
        //stop case
        if(sum==n && k==0){
            ans.push_back(ds);
            return;
        }
        if(sum>n) return;
        //condition loop
        
         for(int i=index;i<=9;i++){
            if(i>n) break;
            ds.push_back(i);
            helper(ans,ds,sum+i,i+1,k-1,n);
            ds.pop_back();
         }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;
        helper(ans,ds,0,1,k,n);
        return ans;
    }
};