class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>psum(n,0);
        int count = 0 ;
        psum[0] = nums[0] ;
        for(int i = 1 ; i < n ;i++){
            psum[i] = psum[i-1] + nums[i] ;
        }
        unordered_map<int,int>m;
        for(int j = 0 ; j < n ; j++){
            if(psum[j] == k){
                count++ ;
            }
            int val = psum[j] - k ;
            if(m.find(val) != m.end()){
                count += m[val];
            }
            if(m.find(psum[j]) == m.end()){
                m[psum[j]] = 0 ;
            }
            m[psum[j]]++;
        }
        return count;
    }
};