class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%2 == 0){
                if(m.find(nums[i]) == m.end()){
                    m[nums[i]] = 0 ;
                }
                m[nums[i]]++ ;
            } 
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(m.find(nums[i]) != m.end()){
                if(m[nums[i]] == 1){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};