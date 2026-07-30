class Solution {
public:
    bool isValid(vector<int>&position,int m , int mid){
        int n = position.size();
        int count = 1 ;
        int b = position[0];
        for (int i = 1 ; i < n ; i++){
            if(position[i]-b >= mid){
                b = position[i];
                count++ ;
            }
            else{
                continue;
            }
        }
        if(count >= m){
            return true;
        }
        else{
            return false;
        }
    }
    int maxDistance(vector<int>& position, int m) {
        int ans = 0;
        sort(position.begin(),position.end());
        int st = 1 , end = *max_element(position.begin(),position.end()) - *min_element(position.begin(),position.end());
        while(st<= end){
            int mid = st+(end-st)/2;
            if(isValid(position , m ,mid)){
                ans = mid;
                st = mid  + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
};