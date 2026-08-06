class Solution {
public:
    bool isPalindrome(string s) {
       string temp;
       string temp2;
       for(int i = 0 ; i < s.length();i++){
        if(isalnum(s[i])){
            temp += tolower(s[i])  ;
        }
       }
       temp2 = temp ;
       reverse(temp2.begin(),temp2.end());
       if(temp2 == temp){
        return true;
       }
       else{
        return false;
       }
    }
};