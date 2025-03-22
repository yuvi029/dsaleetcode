class Solution {
public:
int sumbyD(vector<int>& v, int divisor){
    int sum=0;
    int l=v.size();
    for(int i=0;i<l;i++){
        sum+=ceil((double)v[i]/(double)divisor);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        int n=nums.size();
        if(n>threshold) return -1;
        int low=1;
        int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
           if(sumbyD(nums,mid)<=threshold){
              high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
        return low;
    }
};