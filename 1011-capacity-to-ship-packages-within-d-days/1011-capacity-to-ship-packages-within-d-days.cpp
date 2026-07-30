class Solution {
public:
    bool isValid(vector<int>&a , int n , int days , int mid){
        int ans = 0 , d = 1 ;
        for(int i = 0 ; i < n ; i++){
            if(ans + a[i] <= mid){
                ans += a[i];
            }
            else{
                d++;
                ans = a[i];
            }
        }
        if(d > days){
            return false;
        }
        else{
            return true;
        }
    }
    int shipWithinDays(vector<int>&a, int days) {
        int n = a.size();
        int cap = 0 ;
        long long sum = 0;
        int ans = 0;
        for (int i = 0 ; i< n ; i++){
            sum += a[i];
        }
        int st = *max_element(a.begin(),a.end()) , end = sum;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(isValid(a,n,days,mid)){
                ans = mid;
                end = mid - 1 ;
            }
            else{
                st = mid + 1;
            }
        }
        return ans;
    }

};