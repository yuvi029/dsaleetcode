#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequency using map
        unordered_map<int,int> freq;
        for (int n : nums) {
            freq[n]++;
        }

        // Step 2: Use max heap (priority queue) based on frequency   
        priority_queue<pair<int,int>> maxHeap;
        for (auto &p : freq) {
            maxHeap.push({p.second, p.first}); 
            // {frequency, number}
        }

        // Step 3: Extract top k elements
        vector<int> result;
        while (k-- && !maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};

