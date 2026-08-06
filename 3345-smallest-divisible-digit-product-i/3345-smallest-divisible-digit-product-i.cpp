class Solution {
public:
    int smallestNumber(int n, int t) {
        int p ;
        int temp ;
        for(int i = n ; i <= 100 ; i++){
            p = 1 ;
            temp = i ;
            do{
                p *= temp % 10;
                temp /= 10 ;
            }while(temp > 0);
            if(p%t == 0){
                return i ;
            }
        }
        return -1;
    }
};