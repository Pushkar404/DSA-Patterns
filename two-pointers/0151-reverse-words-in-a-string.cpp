#include <bits/stdc++.h>
using namespace std;

class Solution{
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
string reverseWords(string s){
      int l = 0, 
          r = s.size() - 1;

      // Find the first non space char
      while (l < s.size()  && s[l] == ' '){
            l++;
      }
      while (r >= 0 && s[r] == ' '){
            r--;
      }
      string sb;
      while (l <= r){
            if (s[l] != ' '){
                  sb.push_back(s[l]);
                  l++;
            }
            else{
                  int n = sb.size() - 1;
                  if (!sb.empty() && sb[n] != ' '){
                        sb.push_back(' ');
                  }
                  l++;
            }
      }
      int i = 0, j = sb.size() - 1;
      reverseString(sb, i, j);

      int start = 0, end = 0;

      while (start < sb.size()){
            while (end<sb.size() && sb[end] != ' '){
                  end++;
            }
            int p1 = start, p2 = end - 1;
            reverseString(sb, p1, p2);
            start = end + 1;
            end = start;
      }
      return sb;

}

};