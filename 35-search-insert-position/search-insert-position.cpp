class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;  // To prevent overflow

            if (nums[mid] == target) {
                return mid;  // Target found at mid
            } else if (nums[mid] < target) {
                left = mid + 1;  // Target is on the right side
            } else {
                right = mid - 1;  // Target is on the left side
            }
        }

        // If the target is not found, left is the insertion index
        return left;
    }
};
