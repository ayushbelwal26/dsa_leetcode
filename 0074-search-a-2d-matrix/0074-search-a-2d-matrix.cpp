class Solution {
public:
    bool searchCol(vector<vector<int>>& matrix, int row, int target){
        int m =  matrix[0].size();
        int st = 0, end = m - 1 ;
        while(st <= end){
            int mid = st + (end - st)/2 ;
            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] > target){
                end = mid - 1;
            }
            else{
                st = mid + 1 ;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int st = 0 , end = n - 1 ;
        while(st <= end){
            int mid = st + (end - st)/2 ;
            if(matrix[mid][0] <= target && target <= matrix[mid][m-1]){
                return searchCol(matrix , mid , target);
            }
            else if(matrix[mid][0] > target){
                end = mid - 1 ;
            }
            else{
                st = mid + 1 ;
            }
        }
        return false  ;
    }
};