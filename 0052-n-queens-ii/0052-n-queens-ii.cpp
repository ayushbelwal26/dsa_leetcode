class Solution {
public:
    bool isSafe(vector<string>&boards,int row , int col , int n){
        for(int i = 0 ; i < n ; i++){
            if(boards[i][col] == 'Q'){
                return false;
            }
        }
        for(int j = 0 ; j < n ; j++){
            if(boards[row][j] == 'Q'){
                return false;
            }
        }
        for(int i = row , j = col ; i >= 0 && j >=0 ; i-- , j--){
            if(boards[i][j] == 'Q'){
                return false;
            }
        }
        for(int i = row , j = col ; i >= 0 && j < n ; i-- , j++){
            if(boards[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void nQueens(vector<string>&boards , int &count , int row , int n){
        if(row == n){
            count = count + 1;
            return;
        }
        for(int j = 0 ; j < n ; j++){
            if(isSafe(boards,row,j,n)){
                boards[row][j] = 'Q';
                nQueens(boards,count,row+1,n);
                boards[row][j] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string>boards(n,string(n  , '.'));
        int count = 0;
        nQueens(boards,count,0,n);
        return count ;
    }
};