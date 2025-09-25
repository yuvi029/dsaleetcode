class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
      
        for(string ops:operations){
            if(ops=="C") ans.pop_back();
            else if(ops=="D") ans.push_back(ans.back()*2);
            else if(ops=="+")  { int n=ans.size();
            ans.push_back(ans[n-1]+ans[n-2]);
            }
            else {
                ans.push_back(stoi(ops));
                //
                //
                //
                //converts string in into integer
            }
        }

        int answ=0;
        for(int sc:ans) answ+=sc;
        return answ;

    }
};