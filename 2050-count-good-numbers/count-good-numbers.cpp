class Solution {
public:
  long long mypow(long long x,long long n){
    const int MOD=1e9+7;
        if(n==0) return 1;
        long long half=mypow(x,n/2);
        if(n%2==0) return (half*half)%MOD;
        else if(n>0) return (x*half*half)%MOD;
        else{
            return (1/x)*half*half;
        }
    }
    int countGoodNumbers(long long n) {
        const int MOD = 1e9 + 7;

        long long ans=0;
        if(n%2==0){
            ans=(mypow(5,n/2)*mypow(4,n/2))%MOD;
        }
        else{
            ans=(5*mypow(5,(n-1)/2)*mypow(4,(n-1)/2))%MOD;
        }        
        // if(ans>INT_MAX) return ans%MOD;
        // else{
        //     return ans;
        // }
        return ans;
    }
};