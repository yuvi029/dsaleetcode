class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        map<int,int> mp;
     
        for(int i=0;i<n;i++){
            mp[candyType[i]]++;
        }
        int diff=mp.size();
        return min(diff,n/2);
        //if(diff==1) return 1;
    }
};