class Solution {
public:
    void findsub(vector<int>&nums,vector<int>&ans,vector<vector<int>>&allsubsets,int i ){
        int n = nums.size();
        if(i == n){
            allsubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        findsub(nums,ans,allsubsets,i+1);
        int idx = i + 1;
        while(idx < n && nums[idx] == nums[idx -  1]){
            idx++ ;
        }
        ans.pop_back();
        findsub(nums,ans,allsubsets,idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        vector<vector<int>>allsubsets;
        vector<int>ans;
        findsub(nums,ans,allsubsets,i);
        return allsubsets;
    }
};