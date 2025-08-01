class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() < 3) return 0;
        int left = 0, right = height.size()-1;
        int wall_left = height[0], wall_right = height[height.size()-1];
        int trapped_water = 0;
        while(left < right){
            cout << trapped_water << endl;
            if(height[left] < height[right])
            {
                left++;
                wall_left = max(wall_left, height[left]);
                trapped_water += (min(wall_left, wall_right) - height[left] > 0)? min(wall_left, wall_right) - height[left] : 0;
            }
            else
            {
                right--;
                wall_right = max(wall_right, height[right]);
                trapped_water += (min(wall_left, wall_right) - height[right] > 0)? min(wall_left, wall_right) - height[right] : 0;
            }
        }
        return trapped_water;
    }
};