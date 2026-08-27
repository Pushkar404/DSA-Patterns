#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_set<int> mp;
      int i = 0;
      for(int num:nums){
            if (mp.count(num)){
                  return num;
            }
            mp.insert(num);
      }
      return 0;
    };
};
// Time: O(n) Space: O(n)