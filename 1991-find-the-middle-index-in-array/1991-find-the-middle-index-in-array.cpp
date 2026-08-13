class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>s_sum(n,0);
        vector<int>p_sum(n,0);
        p_sum[0] = nums[0] ;
        for(int i = 1 ; i < n ; i++){
            p_sum[i] = p_sum[i-1] + nums[i];  
        }
        s_sum[n-1] = nums[n-1];
        for(int i = n - 2 ; i >=0 ; i--){
            s_sum[i] = s_sum[i+1] + nums[i];
        }
        for(int i = 0 ; i < n ; i++){
            if(s_sum[i] == p_sum[i]){
                return i ;
            }
        }
        return -1;
    }
};
    
