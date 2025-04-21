class Solution {
public:
    // Find Previous Smaller Element Index
    vector<int> findpsee(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();  // Index of previous smaller
            st.push(i);
        }
        return pse;
    }

    // Find Next Smaller Element Index
    vector<int> findnse(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();  // Index of next smaller
            st.push(i);
        }
        return nse;
    }

    // Sum of Subarray Minimums
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;

        vector<int> prev = findpsee(arr);
        vector<int> next = findnse(arr);

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - prev[i];
            long long right = next[i] - i;
            sum = (sum + (arr[i] * left % mod) * right % mod) % mod;
        }
        return (int)sum;
    }
};
