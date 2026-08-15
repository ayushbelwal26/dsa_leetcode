class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end()) ;
        if(nums.size() == 0){
            return 0;
        }
        int ans = 1 ;
        for(auto x:s){
            if(s.find(x-1) == s.end()){
                int count = 1 ;
                int a = x ;
                while(s.find(a+1)!= s.end()){
                    count++ ;
                    a = a+1;
                }
                ans = max(ans,count);
            }
        }
        return ans; 
    }
};