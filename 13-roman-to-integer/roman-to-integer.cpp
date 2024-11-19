#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num;
        int sum = 0;
        int* numaric = new int[s.length()];
        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
            case 'I':
                num = 1;
                break;
            case 'V':
                num = 5;
                break;
            case 'X':
                num = 10;
                break;
            case 'L':
                num = 50;
                break;
            case 'C':
                num = 100;
                break;
            case 'D':
                num = 500;
                break;
            case 'M':
                num = 1000;
                break;
            default:
                break;
            }
            numaric[i] = num;
        }
        for (int i = 0; i < s.length(); i++) {
            if (i < s.length() - 1 && numaric[i + 1] > numaric[i]) {
                numaric[i] = numaric[i + 1] - numaric[i];
                sum += numaric[i];
                i++;
            }

            else
                sum += numaric[i];
        }
        return sum;
    }
};