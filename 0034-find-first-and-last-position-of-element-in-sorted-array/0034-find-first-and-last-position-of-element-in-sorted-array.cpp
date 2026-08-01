class Solution {
public:
    int firstOccurence(vector<int>& nums, int target){
        int n = nums.size();
        int st = 0 , end = n-1 ;
        int ans = -1 ;
        while(st <= end){
            int mid = st + (end - st)/2 ;
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target){
                end = mid - 1 ;
            }
            else{
                st = mid + 1 ;
            }
        }
        return ans;
    }
    int lastOccurence(vector<int>& nums, int target){
        int n = nums.size();
        int st = 0 , end = n-1 ;
        int ans = -1;
        while(st <= end){
            int mid = st + (end - st)/2 ;
            if(nums[mid] == target){
                ans = mid;
                st = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1 ;
            }
            else{
                st = mid + 1 ;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>nums1 ;
        int n = nums.size();
        int a = firstOccurence(nums,target);
        int b = lastOccurence(nums,target);

        if(a == -1){
            nums1.push_back(-1);
            nums1.push_back(-1);
        }
        else{
            nums1.push_back(a);
            nums1.push_back(b);
        }
        return nums1 ;
    }
    
};