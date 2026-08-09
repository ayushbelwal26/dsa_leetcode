class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>nums;
        vector<int>nums1;
        vector<int>nums2;
        for(int i = 0 ; i < matrix.size() ; i++){
            int minrow = INT_MAX;
            for(int j = 0 ; j < matrix[i].size(); j++){
                minrow = min(minrow,matrix[i][j]);
            }
            nums.push_back(minrow);
        }
        for(int i = 0 ; i < matrix[0].size() ; i++){
            int maxcol = INT_MIN;
            for(int j = 0 ; j < matrix.size(); j++){
                maxcol = max(maxcol,matrix[j][i]);
            }
            nums1.push_back(maxcol);
        }
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = 0 ; j < nums1.size() ; j++){
                if(nums1[j] == nums[i]){
                    nums2.push_back(nums[i]);
                }
            }
        }
        return nums2;
    }
};