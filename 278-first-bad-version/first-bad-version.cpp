// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //after a bad version is also a bad
        int low=0;
        int high=n;
        int ans=n;
        while(low<=high){
            int mid=high+((low-high)/2);

            if(isBadVersion(mid)){
                ans=mid;
                high=mid-1;
                
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }
};