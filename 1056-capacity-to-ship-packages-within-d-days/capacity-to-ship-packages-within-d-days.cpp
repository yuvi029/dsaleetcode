class Solution {
public:
int sum(vector<int>& v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
int daysrequired(vector<int>& y,int capacity){
    int day=1;
    int load =0;
    int w=y.size();
    for(int i=0;i<w;i++){
        if(load+y[i]<=capacity){
            load+=y[i];
        }
        else{
            day=day+1;
            load=y[i];
        }
    }
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {
       int n=weights.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,weights[i]);
        }
        int sums=sum(weights);
        int low=maxi;
        int high=sums;
        while(low<=high){
            int mid=(low+high)/2;
            if(daysrequired(weights,mid)<=days){
                high=mid-1;
            }
            else
            {
             low=mid+1;
            }
        }
        return low;
        
    }
};