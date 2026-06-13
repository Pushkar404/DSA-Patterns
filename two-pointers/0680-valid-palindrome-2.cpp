#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      bool palindromeHelper(int i, int j, string s){
            while (i < j){
                  if (s[i] != s[j]){
                        return false;
                  }
                  i++; j--;
            }
            return true;
      };
      bool validPalindrome(string s) {
            int i = 0;
            int j = s.size() - 1;

            while (i < j){
                  if (s[i] != s[j]){
                        bool ans1 = palindromeHelper(i+1, j, s);
                        bool ans2 = palindromeHelper(i, j-1, s);
                        return (ans1 || ans2);
                  }
                  i++; j--;
            }
            return true;
            
      }
};

/* s = [ d e e e e]
         i       j
s = [c b b c c]
     i       j
ans1 {
s = [c b b c c]
       i     j

}
ans2 {
s = [c b b c c]
       i j

}


*/