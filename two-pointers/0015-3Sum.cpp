#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(), nums.end()); // Time Complexity O(n log n)
            vector<vector<int>> ans;
            
            for (int f = 0; f < nums.size() - 2; f++){
                  if (f>0 && 
                        (nums[f] == nums[f-1]))
                              continue;

                  int
                  i = f + 1,
                  j = nums.size() - 1;
                                  
                  while (i < j){
                        int 
                        sum = nums[f] + nums[i] + nums[j];
                        if (sum < 0){
                              i++;
                        }
                        else if (sum > 0){
                              j--;
                        }
                        else {
                              ans.push_back({nums[f], nums[i], nums[j]});

                              while (i < j && 
                                    (nums[i] == nums[i+1])) 
                                          i++;
                              while (i < j && 
                                    (nums[j] == nums[j-1])) 
                                          j--;
                              i++; j--;                        
                        }
                  }
            }
            return ans;

      };
};
