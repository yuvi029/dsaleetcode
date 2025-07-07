class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int result=nums[0];
        
        for(int i=0;i<n;i++){
            int pro=nums[i];
            for(int j=i+1;j<n;j++){
                result=max(result,pro);
                pro=pro*nums[j];
                // ds.push_back(pro);
            }
            result=max(result,pro);
        }
        return result;
    }
};