#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        int countA = 0;
        int countB =0;
        if(s.length() == 1)
            return false;

        for(int i =0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                temp.push(s[i]);  
                countA++;  
                continue;
            }
            else if(temp.empty())
                return false;
            else if(!temp.empty()){  
                if(s[i] == ')' && temp.top() != '('){
                    return false;
                } 
                else if(s[i] == '}' && temp.top() != '{'){
                    return false;
                } 
                else if(s[i] == ']' && temp.top() != '['){
                    return false;
                } 
                countB++;
                temp.pop();
            }
        }
        if(countA != countB)
            return false;
            
        return true;
    }
};