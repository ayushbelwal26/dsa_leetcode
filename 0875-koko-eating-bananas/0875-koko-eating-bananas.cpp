class Solution {
public:
    bool isValid(vector<int>&a,int k, int h){
        int n  = a.size();
        long long ans = 0 ;
        for(int i = 0  ; i < n ; i++){
            ans += (a[i]+k-1)/k ;
        }
        if(ans > h){
            return false;
        }
        else{
            return true;
        }
    }
    int minEatingSpeed(vector<int>& a, int h) {
        long long int sum = 0;
        int n = a.size();
        for(int i = 0 ; i < n ; i++){
            sum = sum + a[i];
        }
        int st = 1, end =  *max_element(a.begin(),a.end());
        long long ans = -1 ;
        while(st <= end){

            int k = st+(end-st)/2;
            if(isValid(a,k,h)){
                ans = k ;
                end = k - 1;
            }
            else{
                st = k + 1;
            }
        }
        return ans ;
    }
};