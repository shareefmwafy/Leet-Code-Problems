class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end());

        int i =0;
        string first = strs.front();
        string last = strs.back();

        int minLength = (first.length(),last.length());

        while(i<minLength && (first[i] == last[i]))
            i++;

        return first.substr(0,i);
    }
};