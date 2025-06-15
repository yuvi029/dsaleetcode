class Solution {
public:
    int myAtoi(string s) {
        //declaration
        int i=0;
        int n=s.size();

        //step 1 skip leading spaces
        while(i<n && s[i]==' ') i++;
        //handle signs
        int sign =1;
        if(i<n && (s[i]=='+' || s[i]=='-')) {
            sign=(s[i]=='+')?1:-1;//it means if sign is plus then print1or else print minus
            i++;
        }
        //iterate
      long rsl=0;
      while(i<n && isdigit(s[i])){
        int digit=s[i]-'0';
        rsl=rsl*10+digit;

        //check overflow
        if(sign==1 && rsl>INT_MAX) return INT_MAX;
        if(sign==-1 && -rsl<INT_MIN) return INT_MIN;
        i++;
      }
      return sign * rsl;
    }
};