class Solution {
public:
    int maxArea(vector<int>& height) {

        int left =0;
        int right = height.size()-1;
        int maxArea = 0;

        while(left<right){
            int temp = min(height[left], height[right]);
            temp = temp * (right-left);

            if(height[left]>= height[right]){
                right--;
            }
                
            else{
                left++;
            }
                


            maxArea = max(maxArea , temp);
        }
        return maxArea;

    }
};