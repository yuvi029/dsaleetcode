class Solution {
public:
int findmaxforh(vector<int>& v){
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    return maxi;
}
int totalhoursfork(vector<int>& v, int hourly){
    int TotalH=0;
    int n=v.size();
    if(hourly==0){
        return INT_MAX;
    }
    for(int i=0;i<n;i++){
        TotalH += ceil((double)v[i]/hourly);
        //this function is important as here we are able calculate  total hour to eat banana hourly is k  ceil is used to round off to next integer
    }
    return TotalH;
}
 int minEatingSpeed(vector<int>& piles, int h) {
        int low=0;
        int high= findmaxforh(piles);
        while(low<=high){
            int mid=(low+high)/2;
            int TotalH= totalhoursfork(piles,mid);
            if(TotalH <= h){
                high= mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};