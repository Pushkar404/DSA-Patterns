#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
      int sumOfSquareOfDigit(int n){
            int sum = 0;
            while (n > 0)
            {
                  /* n = 63
                     dig = 3
                     sum = 0 + 9
                     n = 6
                     dig = 6
                     sum = 9 + 36
                     n = 0
                  */
                  int dig = n % 10;
                  sum = sum + (dig * dig);
                  n = n / 10;
            }
            return sum;
            
      }
    bool isHappy(int n) {
      int slow = n,
          fast = n;
      
      while (fast != 1){
            slow = sumOfSquareOfDigit(slow);
            fast = sumOfSquareOfDigit(sumOfSquareOfDigit(fast));

            if (fast == 1){
                  return true;
            }
            if (slow == fast){
                  return false;
            }
      }
      return true;

        
    }
};