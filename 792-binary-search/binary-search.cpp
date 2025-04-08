class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int t = (right + left)/ 2;
            if (nums[t] == target) {
                return t;
            }
            else if (nums[t] < target) {
                left = t + 1;
            }
            else {
                right = t -1;
            }
        }
        return -1;
    }
};