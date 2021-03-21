class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        bool state = true;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }else if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
                continue;
            }else{
                state=false;
                return state;
            }
        }
        return state;
    }
};