class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int max_ans = 0;
        while(left < right){
            max_ans = max(max_ans, (right-left) * min(height[right], height[left]));
            if(height[left] < height[right]) left++;
            else right--;
        }
        return max_ans;
    }
};