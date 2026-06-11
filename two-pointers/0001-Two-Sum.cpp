#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i = 0;
      int j = nums.size() - 1;
      /* Brute Force*/
      // for (int i = 0; i < nums.size() - 1; i++){
      //       int value = target - nums[i];
      //       for (int j = i + 1; j < nums.size(); j++){
      //             if (nums[j] == value){
      //                   return {i, j};
      //             }

      //       }
      // }

      /* Optimised*/
      unordered_map<int, int> seen;
      for (int i = 0; i < nums.size(); i++)
      {
            int value = target - nums[i];
            if (seen.count(value)){
                  return {i, seen[value]};
            }
            seen[ nums[i] ] = i;
      }
      
      return {};
    }
};