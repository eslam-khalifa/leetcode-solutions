class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int left = 0, right = rows * cols - 1;
        int mid = left + (right - left) / 2;
        while (left <= right){
            if (target == matrix[(mid) / cols][mid % cols]) return true;
            else if (target > matrix[(mid) / cols][mid % cols]) left = mid + 1;
            else if (target < matrix[(mid) / cols][mid % cols]) right = mid - 1;
            mid = left + (right - left) / 2;
        }
        return false;
    }
};