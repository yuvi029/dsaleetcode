class Solution {
public:
    // Previous Greater Element's Index
    vector<int> findpgee(vector<int>& arr) {
        int n = arr.size();
        vector<int> pgee(n);
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            pgee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pgee;
    }

    // Previous Smaller Element's Index
    vector<int> findpsee(vector<int>& arr) {
        int n = arr.size();
        vector<int> psee(n);
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            psee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return psee;
    }

    // Next Greater Element's Index
    vector<int> findngee(vector<int>& arr) {
        int n = arr.size();
        vector<int> ngee(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            ngee[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ngee;
    }

    // Next Smaller Element's Index
    vector<int> findnsee(vector<int>& arr) {
        int n = arr.size();
        vector<int> nsee(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            nsee[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nsee;
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> pgee = findpgee(nums);
        vector<int> ngee = findngee(nums);
        vector<int> psee = findpsee(nums);
        vector<int> nsee = findnsee(nums);

        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            // Count of subarrays where nums[i] is the maximum
            long long max_count = (long long)(i - pgee[i]) * (ngee[i] - i);
            // Count of subarrays where nums[i] is the minimum
            long long min_count = (long long)(i - psee[i]) * (nsee[i] - i);
            sum += (max_count - min_count) * nums[i];
        }

        return sum;
    }
};
