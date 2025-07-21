class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int cnt5=0;
        int cnt10=0;
        int cnt20=0;
        for(int i=0;i<n;i++){
                 if(bills[i]==5) cnt5++;
                //  return false;

                 else if(bills[i]==10){
                   if(cnt5>0){ 
                    cnt5--;
                    cnt10++;
                   }
                   else return false;
                 }
                 else{
                    if(cnt10>0 & cnt5>0){
                        cnt5--;
                        cnt10--;
                        cnt20++;
                    }
                    else if(cnt5>=3){
                        cnt5=cnt5-3;
                        cnt20++;
                    }
                    else{ 
                        return false;
                    }
                 }
        }
        return true;
         
    }
};