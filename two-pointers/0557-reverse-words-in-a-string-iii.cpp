#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
void reverseString(string &args, int i, int j) {
      while (i < j){
            char temp = args[i];
            args[i] = args[j];
            args[j] = temp;

            i++;
            j--;
      }
}
    string reverseWords(string s) {
      int start = 0, end = 0;
      while (start < s.size()){
            while (end < s.size() && s[end] != ' ')
            {
                  end++;
            }
            int p1 = start, p2 = end - 1;
            reverseString(s, p1, p2);
            start = end + 1;
            end = start;

            
      }
      return s;  
    }
    
};