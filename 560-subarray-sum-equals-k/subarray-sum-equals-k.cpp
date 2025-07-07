class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        vector<vector<int>> ans;
            vector<int> ds;
        for(int i=0;i<n;i++){
         
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k)  cnt++;
                //ans.push_back(ds);
            }
          //  if(sum==k) cnt++;
        }
       // if(sum==k) cnt++;
    //    int hj=0;
    //    for(int l=0;l<ds.size();l++){
        
    //     if(ds[l]==k) hj++;
    //    }
    //     return hj;
    return cnt;
        

    }
};