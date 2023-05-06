class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size() - 1;
        for(int i = 0; i < matrix.size(); i++) {
            if(target <= matrix[i][n]) {
                if (find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end()) {
                    return true;
                }
            }
        }
        return false;
    }
};