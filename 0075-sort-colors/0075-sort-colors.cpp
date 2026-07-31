class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int a = 0 , b = 0 , c = 0  ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                a++;
            }
            if(nums[i] == 1){
                b++;
            }
            if(nums[i] == 2){
                c++;
            }
        }
        int k =  0 ;
        for(int i = 0 ;i < a; i++){
            nums[k++] = 0 ;
        }
        for(int i = 0 ; i < b ;i++){
            nums[k++] = 1 ;
        }
        for(int i = 0 ; i < c ; i++){
            nums[k++] = 2;
        }
    }
};