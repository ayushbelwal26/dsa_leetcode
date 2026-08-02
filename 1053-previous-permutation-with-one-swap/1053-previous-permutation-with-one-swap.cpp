class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size();
        int piv = -1 ;
        for(int i = n - 2 ; i >= 0 ; i--){
            if(arr[i] > arr[i+1]){
                piv = i ;
                break;
            }
        }
        if(piv == -1){
            return arr;
        }
        for(int i = n - 1 ; i > piv; i--){
            while (i > piv + 1 && arr[i] == arr[i - 1]) {
                    i--;
            }
            if(arr[i] < arr[piv] ){
                swap(arr[i],arr[piv]);
                break;
            }
        }
        int i = n -1 ;
        return arr;
    }
};