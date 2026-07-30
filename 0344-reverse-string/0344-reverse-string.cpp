class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int st = 0 , end = n -1 , temp ;
        while(st<end){
            s[st] = s[st] ^ s[end];
            s[end] = s[st] ^ s[end];
            s[st] = s[st] ^ s[end];
            st++ ;
            end-- ;
        }
    }
};