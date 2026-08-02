class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>nums1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0){
                continue;
            }
            else{
                nums[index] = -nums[index];
            }
        }
        for(int i = 0  ; i < n ; i++){
            if(nums[i] < 0){
                continue;
            }
            else{
                nums1.push_back(i+1);
            }
        }
        return nums1;

    }
};