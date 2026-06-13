#include <bits/stdc++.h>
using namespace std;
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.


class Solution {
public:
    bool isPalindrome(string s) {
      int i = 0,
          j = s.size() - 1;
      while (i < j){
            if (!isalnum(s[i])){
                  i++;
                  continue;
            }
            if (!isalnum(s[j])){
                  j--;
                  continue;
            }
            if (tolower(s[i]) != tolower(s[j])){
                  return false;
            }
            i++; j--;
      }

      return true;
        

    }
};