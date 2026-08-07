class Solution {
public:
    string reverseWords(string s) {
        vector<string>words ;
        string ans;
        for(int i = 0 ; i < s.length() ; i++){
            string word;
            while(i < s.length()  && s[i] != ' '){
                word += s[i];
                i++ ;   
            }
            if(word.length() > 0){
                words.push_back(word);
            }
        }
        int target = 0;
        string a = words[0];
        int i = 0 ;
        while(i < a.length()){
            if(a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u'){
                target++ ;
            }
            i++;
        }
        ans +=  a;
        for(int i = 1 ; i < words.size();i++){
            string b = words[i];
            int count = 0 ;
            int j = 0 ;
            while(j < b.length()){
                if(b[j] == 'a'||b[j] == 'e'||b[j] == 'i'||b[j] == 'o'||b[j] == 'u'){
                    count ++ ;
                }
                j++;
            }
            if(target == count){
                reverse(words[i].begin(),words[i].end());
            }
            ans += " " + words[i];
        }
        return ans;
    }
};