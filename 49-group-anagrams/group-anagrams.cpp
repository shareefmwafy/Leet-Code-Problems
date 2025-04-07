class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> gruop;

        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            string key =  word;
            sort(key.begin(), key.end()); 
            gruop[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto i = gruop.begin(); i != gruop.end(); i++) {
            result.push_back(i->second);
        }
        return result;
    }
};