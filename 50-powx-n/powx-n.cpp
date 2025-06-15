class Solution {
public:
    double myPow(double x, int n) {
        //EDGE CASE OF ZERO 
        if(n==0) return 1;
        double half= myPow(x,n/2);
        if(n>0){
            if(n%2==0) return half*half;
            else{
                return x*half*half;
            }
        }
        else{
            if(n%2==0) return half*half;
            else{
                double ans=(1/x)*half*half;
                return ans;
            }
        }
    }
};