class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        string temp =to_string(x);
        string result = "";

        for(int i = temp.length()-1; i>=0; i--){
            result += temp[i];
        }

        if((temp.compare(result)) == 0)
            return true;

        return false;
    }
};