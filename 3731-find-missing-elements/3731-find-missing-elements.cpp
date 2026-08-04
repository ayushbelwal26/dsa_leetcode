class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>nums1 ;
        sort(nums.begin(),nums.end());
        int low = *min_element(nums.begin(),nums.end());
        int i = 0 ;
        while(i < n){
            if(nums[i] == low){
                low++ ;
                i++;
            }
            else{
                nums1.push_back(low);
                low++;
            }
        }
        return nums1;
    }
};