class Solution {
public:
    int sumtilll(vector<int>&nums, int k){
        int sum1=0;
        int n=nums.size();
        if(k>n) return 1e6+1;
        for(int i=0;i<k;i++){
            sum1+=nums[i];
        }
        int mini= (sum1>0)?sum1:1e6+1;
        
     
        for(int i=k;i<n;i++){
            sum1+=nums[i]-nums[i-k];
            if(sum1>0)
               mini=min(mini,sum1);
        }
       
        return mini;
       

    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        vector<int> arr;
       int mini=1e6+1;
       for(int i=l;i<=r;i++){
          int sum=sumtilll(nums,i);
           mini=min(mini,sum);
          //arr.push_back(sum);
       }
       return (mini==1e6+1?-1:mini);

    //    return arr[0];
        
    }
};