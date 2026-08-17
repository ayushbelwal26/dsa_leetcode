class Solution {
public:
    void find_sub(vector<int>&nums , vector<int>&ans , vector<vector<int>>&all_subset , int i){
        int n = nums.size();
        if(i == n){
            all_subset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        find_sub(nums,ans,all_subset,i+1);
        ans.pop_back();
        find_sub(nums,ans,all_subset,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>all_subset;
        vector<int>ans;
        int i = 0;
        find_sub(nums,ans,all_subset,i);
        return all_subset ;
    }
};