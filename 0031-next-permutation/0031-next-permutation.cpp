class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int piv = -1 ;
        for(int i = n - 2 ; i >= 0 ;i--){
            if(nums[i] < nums[i+1]){
                piv = i;
                break;
            }
        }
        int st = 0 , end = n -1 ;
        if(piv == -1){
            while(st<=end){
                swap(nums[st],nums[end]);
                st++ ;
                end--;

            }
            return;
        }

        for(int i = n - 1 ; i > piv ; i--){
            if(nums[i] > nums[piv]){
                swap(nums[i],nums[piv]); 
                break;
            }
        }

        int a = piv + 1 , b = n - 1;
        while(a <= b){
            swap(nums[a],nums[b]);
            a++;
            b--;
        }
    }
};