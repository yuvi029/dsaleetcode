class Solution {
public:
    int arrangeCoins(int n) {
        //k rows where the ith row has i coins
        int i=1;
        int res=0;
        while(i<=n){
            n=n-i;
            res++;
            i++;
        }
        return res;
    }
};