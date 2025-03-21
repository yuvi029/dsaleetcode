class Solution {
public:
bool possible(vector<int>& v,int day, int m, int k) {
    int cnt=0;
    int bouquets=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=day){
            cnt++;
            if(cnt==k){  //adjacent flowers
            bouquets++;
            cnt=0;
            }
        }
        else{
            cnt=0;
        }
    }
    return bouquets>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int val=(long long)m*k;
        if(val>bloomDay.size()) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            mini=min(bloomDay[i],mini);
            maxi=max(bloomDay[i],maxi);
        }
        int low=mini;
        int high=maxi;
        while(low<=high) {
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                //we need min so we will go backward
              high=mid-1;

                }
                else{
                low=mid+1;
                }
                
            }
            return low;
    }
    
};