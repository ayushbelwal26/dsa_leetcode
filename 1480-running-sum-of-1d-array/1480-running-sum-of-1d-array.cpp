class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        int n = a.size();
        for(int i = 1 ; i < n ; i++){
            a[i] = a[i] + a[i-1];
        }
        return a;
    }
};