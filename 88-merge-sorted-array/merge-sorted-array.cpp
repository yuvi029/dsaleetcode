class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //sort(nums1.begin(),nums1.end());
        //sort(nums2.begin(),nums2.end());
        vector<int> arr;
        queue<int> q1,q2;
        for(int i=0;i<m;i++){
             q1.push(nums1[i]);
        }
        for(int i=0;i<n;i++){
            q2.push(nums2[i]);
        }
        while(!q1.empty() &&!q2.empty()){
            if(q1.front()<=q2.front()){
                arr.push_back(q1.front());
                q1.pop();
            }
            else{
                arr.push_back(q2.front());
                q2.pop();
            }
        }
        //remaining
        while(!q1.empty()){
            arr.push_back(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            arr.push_back(q2.front());
            q2.pop();
        }
       for (int i = 0; i < m + n; i++) {
            nums1[i] = arr[i];
        }
    }
};