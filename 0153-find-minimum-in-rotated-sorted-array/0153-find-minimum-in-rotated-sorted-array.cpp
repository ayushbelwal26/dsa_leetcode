class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0 , end = n - 1;
        if(nums[0] < nums[n-1]){
            return nums[0] ;
        }
        while(st < end){
            int mid = st + (end-st)/2;
            if(nums[mid] < nums[end] ){
                end = mid ;
            }
            else{
                st = mid + 1 ;
            }
        }
        return nums[st];
    }
};