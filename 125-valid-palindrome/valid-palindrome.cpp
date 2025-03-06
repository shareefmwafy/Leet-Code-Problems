class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.length();){
            if( !isalnum(s[i])){
                s.erase(i,1);
            }
            else{
                s[i] = tolower(s[i]);
                i++;
            }
                         
        }

        int left=0, right=s.length()-1;

        while(left < right){
            if(s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};