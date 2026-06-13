#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        while ( i < j ){
            char left = s[i];
            char right = s[j];
            s[j] = left;
            s[i] = right;
            i++;
            j--;
        }
        
    }
};