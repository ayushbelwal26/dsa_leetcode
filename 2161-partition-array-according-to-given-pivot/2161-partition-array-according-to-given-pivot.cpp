class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n  = nums.size();
        int a = 0 , b = 0 , c = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] < pivot){
                a++;
            }
            else if(nums[i] > pivot){
                c++;
            }
            else{
                b++;
            }
        }
        vector<int>nums1(a);
        vector<int>nums2(b);
        vector<int>nums3(c);
        int p  = 0, q = 0  ,r = 0 , k = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] < pivot){
                nums1[p++] = nums[i];
            }
            else if(nums[i] > pivot){
                nums3[r++] = nums[i];
            }
            else{
                nums2[q++] = nums[i];
            }
        }
        for(int i = 0 ; i < a ; i++){
            nums[k++] = nums1[i];
        }
        for(int i = 0 ; i < b ; i++){
            nums[k++] = nums2[i];
        }
        for(int i = 0 ; i < c ; i++){
            nums[k++] = nums3[i];
        }
        return nums;
    }
};