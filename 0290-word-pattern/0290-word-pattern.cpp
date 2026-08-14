class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        unordered_map<string,char>m1;
        vector<string>w;
        for(int i = 0 ; i < s.length() ; i++){
            string word = "";
            while(i < s.length() && s[i] != ' '){
                word += s[i];
                i++ ;
            }
            w.push_back(word);
        }
        if(w.size() != pattern.length()){
            return false;
        }
        for(int i = 0 ; i < pattern.length() ; i++){
            if(m.find(pattern[i]) == m.end()){
                m[pattern[i]] = w[i] ;
            }
            else{
                if(m[pattern[i]] != w[i]){
                    return  false ;
                }
            }
            if(m1.find(w[i]) == m1.end()){
                m1[w[i]] = pattern[i] ;
            }
            else{
                if(m1[w[i]] != pattern[i]){
                    return  false ;
                }
            }
        }
        return true;
    }
};