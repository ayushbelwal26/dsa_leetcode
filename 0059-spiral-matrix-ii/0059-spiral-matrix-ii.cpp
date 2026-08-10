class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n , vector<int> (n));
        int a = 1 ;
        int srow = 0 , scol = 0 , ecol = n -1 , erow = n - 1;
        while(srow <= erow && scol <= ecol){
            for(int j = scol ; j <= ecol ; j++){
                matrix[srow][j] = a ;
                a++ ;
            }
            for(int i = srow+1 ; i <= erow ; i++){
                matrix[i][ecol] = a ;
                a++;
            }
            for(int j = ecol-1 ; j >= scol ; j--){
                if(srow == erow){
                    break;
                }
                matrix[erow][j] = a;
                a++;
            }
            for(int i = erow - 1 ; i >= srow + 1 ; i--){
                if(scol == ecol){
                    break ;
                }
                matrix[i][scol] = a;
                a++;
            }
            srow++ ; scol ++ ; erow-- ; ecol-- ;
        }
        return matrix;
    }
};