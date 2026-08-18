class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a = n/3;
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i = 0 ; i < n ; i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = 0 ;
            }
            m[nums[i]]++ ;
        }
        for(auto x : m){
            if(x.second > a){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};