class Solution {
public:
     void push(vector<string> & res,int rangestart,int rangeend){
        if(rangestart != rangeend) {
            res.push_back(to_string(rangestart)+ "->" + to_string(rangeend));
        }
        else{
                   res.push_back(to_string(rangestart));
        }
     }
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string> res;
        if(n==0) return res;
        int rangestart=nums[0];
        int rangeend=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i-1]+1 == nums[i]) rangeend=nums[i];
            else{
                push(res,rangestart,rangeend);
                rangestart=nums[i];
                rangeend=nums[i];
            }
        }
        push(res,rangestart,rangeend);
        return res;
    }
};