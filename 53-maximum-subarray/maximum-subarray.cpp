class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        int maxSum = nums.at(0);
        int current = nums.at(0);

        for(int i = 1; i<nums.size(); i++){
            int n = nums.at(i);

            current = max(current+n, n);
            maxSum = max(current, maxSum);
        }
        return maxSum;

    }
};