#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
void sortColors(vector<int>& nums) {

      /**
       * Brute Force | Time Complexity: O(n) | Space Complexity: O(1)
      int c1 = 0,
          c2 = 0,
          c3 = 0;
      // Count occurances of c1 c2 c3
      for (int num:nums){
            if (num == 0) c1++;
            else if (num == 1) c2++;
            else c3++;
      }
      
      int idx = 0;
 
      while (c1--) nums[idx++] = 0;
      
      while (c2--) nums[idx++] = 1;
      
      while (c3--) nums[idx++] = 2;
      */

      // Dutch National Flag Method or Two Pointer Method
      int i = 0,
          k = 0,
          j = nums.size() - 1;
      while (k <= j){
            if (nums[k] == 0){
                  swap(nums[k], nums[i]);
                  k++; i++;
            }
            else if (nums[k] == 1){
                  k++;
            }
            else { // nums[k] == 2
                  swap(nums[k], nums[j]);
                  j--;
            }
      }
      
}
};