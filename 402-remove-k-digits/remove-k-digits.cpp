class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && (st.top()-'0')> num[i]-'0'){
                st.pop();
                k=k-1;
            }
            st.push(num[i]);
        }
        //if no big small only k
        //if no big small only k
while(k > 0 && !st.empty()) {
    st.pop();
    k--;
}

        
        //stack is empty
        if(st.empty()) return "0";
        //result print
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
            reverse(res.begin(),res.end());
        int i=0;
        while(i< res.size() && res[i]=='0'){
        i++;
        }
        res=res.substr(i);
        if(res.empty()) return "0";
        return res;
    }
};