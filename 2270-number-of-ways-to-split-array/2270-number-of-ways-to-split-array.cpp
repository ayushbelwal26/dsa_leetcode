class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
       int n = nums.size();
       int count = 0 ;
       long long total = 0 ;
       for(int i = 0 ; i < n ; i++){
        total += nums[i];
       }
       long long left = 0;
       for(int i = 0 ; i < n-1 ; i++){
        left += nums[i];
        long long right = total - left ;
        if(left >= right){
            count++ ;
        }
       }
       return count;
    }
};