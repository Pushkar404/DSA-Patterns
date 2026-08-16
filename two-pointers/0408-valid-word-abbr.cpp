#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
      int i = 0, j = 0;
      int wordSize = word.size();
      int abbrSize = abbr.size();

      while (i < wordSize && j < abbrSize){
            if (isdigit(abbr[j])){
                  if(abbr[j] == '0') return false;
                  int num = 0;
                  while (isdigit(abbr[j])){
                        num = num*10 + (abbr[j] - '0');
                        j++;
                  }
                  i+=num;

            }
            else {
                  if (!(word[i] == abbr[j])) return false;
                  i++; j++;

            }

      }
      return i == wordSize && j == abbrSize;

    };
};