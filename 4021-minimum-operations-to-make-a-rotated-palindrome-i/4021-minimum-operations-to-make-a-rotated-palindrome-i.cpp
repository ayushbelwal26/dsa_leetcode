class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int i = 0 ;
        int ans = INT_MAX;
        int rot = 0 ;
        while(i < n){
            int st = 0 , end = n - 1 ;
            int count = 0 ;
            string temp =  s ;
            while(st < end){
                if(temp[st] == temp[end]){
                    st++  ;
                    end-- ;
                }
                else if(abs(temp[st]- temp[end]) <= 13){
                    if(temp[st] > temp[end]){
                        if(temp[end] == 'z'){
                            temp[end] = 'a';
                        }
                        else{
                            temp[end]++ ;
                        }
                    }
                    else{
                        if(temp[st] == 'z'){
                            temp[st] = 'a';
                        }
                        else{
                            temp[st]++ ;
                        }
                    }
                    count++ ;
                }
                else{
                    if(temp[st] > temp[end]){
                        if(temp[st] == 'z'){
                            temp[st] = 'a';
                        }
                        else{
                            temp[st]++ ;
                        }
                    }
                    else{
                        if(temp[end] == 'z'){
                            temp[end] = 'a';
                        }
                        else{
                            temp[end]++ ;
                        }
                    }
                    count++ ;
                }
            }
            
            int total = count + rot ;

            ans = min(ans , total) ;

            char first = s[0];
            for(int j = 1 ; j < n ; j++){
                s[j - 1] = s[j];
            }
            s[n - 1] = first ;
            i++ ;
            rot++ ;

        
            
        }
        return ans;
    }
};