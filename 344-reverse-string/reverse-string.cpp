class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size()-1;


        for(int i=0; i<s.size()/2; i++){
            char temp = s.at(i);
            s.at(i) = s.at(size);
            s.at(size) = temp;

            size--;

        }
    }
};