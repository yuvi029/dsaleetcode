class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int n=nums.size();
        for(int i=0;i<k; i++){
            sum=sum+nums[i];
        }
        double maxi=sum;
        for(int j=k;j<n;j++){
            sum=sum+nums[j]-nums[j-k];
             maxi=max(maxi,sum);
        }
       
        return maxi/k;
    }
};