class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> nums;
        int num =0;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                num = num*10 + s[i];
            }
            else if(num > 0){
                nums.push_back(num);
                num = 0;
            }
        }
        if(num > 0)
            nums.push_back(num);
        
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i] >= nums[i+1] )
                return false;
        }
        return true;
    }
};