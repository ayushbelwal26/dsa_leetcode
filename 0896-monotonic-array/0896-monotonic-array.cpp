class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int flag = 1 , flag1 = 1 ;
        for(int i = 0 ; i< n-1 ; i++){
            if(nums[i] >= nums[i+1]){
                flag = 1 ;
            }
            else{
                flag = 0 ;
                break;
            }
        }
        for(int i = 0 ; i< n-1 ; i++){
            if(nums[i] <= nums[i+1]){
                flag1 = 1 ;
            }
            else{
                flag1 = 0 ;
                break;
            }
        }
        if(flag == 1){
            return true;
        }
        else if(flag1 == 1){
            return true ;
        }
        else{
            return false;
        }
    }
};