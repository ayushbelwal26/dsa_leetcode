class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN;
        int curr_sum =  0;
        for (int st = 0 ; st < n ; st++){
            curr_sum += nums[st];
            max_sum = max(curr_sum , max_sum);
            if (curr_sum < 0){
                curr_sum = 0;
            }
        }
        return max_sum ;
    }
};