class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans;
        for(int i = 0 ; i < n ; i++){
            string word;
            while(i < n && s[i] != ' '){
                word += s[i];
                i++ ;
            }
            reverse(word.begin(),word.end());;
            ans += ' ' + word;
        }
        return ans.substr(1);
    }
};