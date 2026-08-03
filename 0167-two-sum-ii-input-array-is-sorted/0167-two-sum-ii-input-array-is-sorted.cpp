class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>nums;
        int n = numbers.size();
        int st = 0 , end = n -1 ;
        int a = 0 , b = 0;
        while(st < end){
            if(numbers[st] + numbers[end] == target){
                a = st + 1 ;
                b = end + 1;
                nums.push_back(a);
                nums.push_back(b);
                break;
            }
            else if(numbers[st] + numbers[end] > target){
                end--;
            }

            else{
                st++;
            }
        }
        return nums;
    }
};