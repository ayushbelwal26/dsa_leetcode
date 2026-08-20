class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>m;
        int temp = n ;
        while(temp != 0){
            int a = temp%10 ;
            if(m.find(a) == m.end()){
                m[a] = 0;
            }
            m[a]++ ;
            temp = temp / 10 ;
        }
        int ans = 0;
        for(auto x : m){
            ans += x.first * x.second ;
        }
        return ans;
    }
};