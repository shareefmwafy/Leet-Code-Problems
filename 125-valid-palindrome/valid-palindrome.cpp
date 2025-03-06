class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.length();){
            if(!isalnum(s[i])){
                s.erase(i,1);
            }
            else{
                s[i] = tolower(s[i]);
                i++;
            }
                         
        }

        string temp = "";

        for(int i=s.length()-1; i>=0; i--){
            temp += s[i];
        }

        return temp == s;
    }
};