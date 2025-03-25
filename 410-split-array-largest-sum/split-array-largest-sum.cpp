class Solution {
public:
int maxss(vector<int>& nums){
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
    maxi=max(nums[i],maxi);
    }
    return maxi;
}
int summs(vector<int>& nums){
    int sums=0;
    for(int i=0;i<nums.size();i++){
        sums=sums+nums[i];
    }
    return sums;
}
    int paintedtill(vector<int>& nums, int largestp){
        int paintedsides=1;
        int painted_till_now=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]+painted_till_now<=largestp){
            painted_till_now+=nums[i];
        }
        else {
            painted_till_now=nums[i];
            paintedsides++;
        }
        }
        return paintedsides;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=maxss(nums);
        int high=summs(nums);
        while(low<=high){
            int mid=(low+high)/2;
            int noofsubarray=paintedtill(nums,mid);
            if(noofsubarray>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};