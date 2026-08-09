class Solution {
public:
    int maximumWealth(vector<vector<int>>& mat) {
        int sum =  0 ;
        int n = mat.size();
        for(int i = 0 ; i< n ; i++){
            int si = 0 ;
            for(int j = 0 ; j < mat[i].size();j++){
                si += mat[i][j] ;
            }
            sum = max(sum , si);
        }
        return sum ;

    }
};