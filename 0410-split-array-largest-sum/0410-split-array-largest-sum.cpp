class Solution {
public:
    bool isValid(vector <int>& nums , int  n , int k , int mid){
        int student = 1 , sa =  0;
        for(int i = 0 ; i< n ; i++){
            if(nums[i]>mid){
                return false;
            }
            if(sa+nums[i] <= mid){
                sa = sa+nums[i];
            }
            else{
                student++;
                sa = nums[i];
            }
        }
        
        if (student > k){
            return false;
        }
        else{
            return true;
        }
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n){
            return -1 ;
        }
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + nums[i];
        }
        int st = 0 , end =  sum ;
        int ans = -1 ;
        while(st <= end){
            int mid = st+(end - st )/2 ;
            if (isValid(nums,n,k , mid)){
                ans =  mid ;
                end = mid - 1 ;
            }
            else{
                st = mid + 1 ;
            }
        }
        return ans;
    }
};