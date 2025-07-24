class Solution {
public:
    static bool comp(const vector<int>& v1,const vector<int>& v2){
        return v1[1]<v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        sort(intervals.begin(),intervals.end(),comp);
        int cnt=1;
        int prevend=intervals[0][1];
        int n=intervals.size();
        for(int i=0;i<n;i++){
            if(intervals[i][0]>=prevend){
                cnt++;
                prevend=intervals[i][1];
            }
        }
        return n-cnt;
    }
};