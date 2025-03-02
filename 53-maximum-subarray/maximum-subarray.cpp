class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        int maxSum = nums.at(0);
        int currentSum = nums.at(0);

        for(int i = 1; i < nums.size(); i++){
            int n = nums.at(i);

            currentSum = max(currentSum+n, n);
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;

    }
};