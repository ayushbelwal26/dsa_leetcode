class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>&ans,int idx){
        int n = nums.size();
        if(idx == n){
            ans.push_back(nums);
            return;
        }
        for(int i = idx ; i < n ; i++){
            swap(nums[idx],nums[i]);
            solve(nums,ans,idx+1);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int idx = 0; 
        solve(nums,ans,idx);
        return ans;
    }
};