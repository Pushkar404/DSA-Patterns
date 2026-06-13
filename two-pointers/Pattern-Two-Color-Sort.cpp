#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
void sortTwoColors(vector<int>& nums){
      int i = 0,
          j = nums.size() - 1;
      
      while (i <= j){
            if (nums[i] == 0){
                  i++;
            }
            else {
                  swap(nums[i], nums[j]);
                  j--;
            }
      }

}
};