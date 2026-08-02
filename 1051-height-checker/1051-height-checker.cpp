class Solution {
public:
    int heightChecker(vector<int>& a) {
        vector<int>b ;
        int n = a.size();
        for(int i = 0 ; i< n ; i++){
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        int count = 0;
        for(int i = 0; i< n ; i++){
            if(a[i] != b[i]){
                count++ ;
            }
        }
        return count;
    }
};