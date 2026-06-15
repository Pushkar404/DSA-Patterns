#include <bits/stdc++.h>
using namespace std;

bool strobogrammaticNumber(string s, unordered_map<char, char>& bag){
      int i = 0,
          j = s.size() - 1;
      while (i<=j){
            bool existsInMap = bag.count(s[i]);
            if (existsInMap == false) return false;

            bool pairMatches = bag[s[i]] == s[j];
            if (pairMatches == false) return false;
            
            i++;
            j--;
            // char charAt_i = s[i];
            // char charAt_j = s[j];
            // if (bag.count(charAt_i)){
            //       if (bag[charAt_i] != charAt_j){
            //             return false;
            //       }
            //       else{
            //             i++;
            //             j--;
            //       }
            // } else {
            //       return false;
            // }           
      }
      return true;
            
}

int main() {
      string s = "198861";
      unordered_map<char, char> bag = {
            {'0', '0'},
            {'1', '1'},
            {'6', '9'},
            {'8', '8'},
            {'9', '6'}
      };
      bool ans = strobogrammaticNumber(s, bag);
      if (ans == true){
            cout<<"True";
      }
      else {
            cout<<"False";
      }
      return 0;
}