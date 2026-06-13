#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

vector<int> sortedSquares(vector<int>& nums) {
      int n = nums.size();
      int i = 0,
          j = n - 1,
          pos = n - 1;
      vector<int> ans(n);

      while (i<=j){
            int sqi = nums[i] * nums[i],
                sqj =  nums[j] * nums[j];

            if(sqi > sqj){
                  ans[pos--] = sqi;
                  i++;
            }
            else {
                  ans[pos--] = sqj;
                  j--;
            }
      }
      return ans;
}};