class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = (nums.size())/2;
        int sum = 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i<2*n){
            sum += min(nums[i],nums[i+1]);
            i += 2 ;
        }
        return sum;
    }
};