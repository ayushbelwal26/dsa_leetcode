class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i = 0 ; i < n ; i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = 0 ;
            }
            m[nums[i]]++ ;
        }
        while(k > 0){    
            int me = 0;
            int mf = 0 ;
            for(auto x : m){
                if(x.second > mf){
                    mf = x.second;
                    me = x.first;
                }
            }
            ans.push_back(me);
            m.erase(me);
            k--;
        }
        return ans;
    }
};