#include <bits/stdc++.h>
using namespace std;

class solution{
public:
bool isPalindrome(string s){
      // 125 Leetcode
      int left = 0, right = s.size() - 1;
      while (left < right){
            if (!isalnum(s[left])){
                  left++;
                  continue;
            }
            if (!isalnum(s[right])){
                  right--;
                  continue;
            }
            if (tolower(s[left]) != tolower(s[right])){
                  return false;
            }
            left++;
            right--;
      }
      return true;
}

vector<int> squareOfSortedArray(vector<int> nums){
      // 0977 LC
      int left = 0, right = nums.size() - 1;
      int k = right;
      while (left <= right){
            if (abs(nums[left]) > abs(nums[right])){
                  nums[k] = nums[left] * nums[left];
                  left++;
            }
            else{
                  nums[k] = nums[right] * nums[right];
                  right--;
            }
            k--;
      }
      return nums;
}

bool palindromeHelper(string s, int i, int j){
      while (i < j){
            if (s[i] != s[j]) return false;
            i++;
            j--;
      }
      return true;
}
bool validPalindrome(string s){
      // 680 LC
      int left = 0, right = s.length() - 1;
      while (left <right){
            if (s[left] != s[right]){
                  bool resultLeft = palindromeHelper(s, left+1, right);
                  bool resultRight = palindromeHelper(s, left, right-1);
                  return resultLeft || resultRight; 
            }
            left++;
            right--;
      }
      return true;
}

bool validWordAbbr(string word, string abbr){
      // 408 Neetcode
      int i = 0, j = 0;
      // word = aeroplane
      // abbr = a7e
      while (j < abbr.size()){
            if (isalpha(abbr[j])){
                  if (word[i] != abbr[j]){
                        return false;
                  }
                  i++; j++;
            }
            else{
                  if (abbr[j] == '0') return false;
                  int sum = 0;
                  while(j < abbr.size() && !isalpha(abbr[j])){
                        sum = sum*10 + (abbr[j] - '0');
                        j++; 
                  }
                  i = i + sum;
            }
      }
      return i==word.size() && j==abbr.size();
}

void mergeSortedArray(vector<int> nums1, int m, vector<int> nums2, int n){
      int i = m - 1, j = n - 1, k = m + n - 1;
      while (i >= 0 && j >= 0){
            if (nums1[i] > nums2[j]){
                  nums1[k--] = nums1[i--];
            }
            else {
                  nums1[k--] = nums2[j--];
            }
      }
      while(i>=0){
            nums1[k--] = nums1[i--];
      }
      while(j>=0){
            nums1[k--] = nums2[j--];
      }
     
      }

int countPairWhoseSumIsLessThanTarget(vector<int> nums, int target){
      sort(nums.begin(), nums.end());
      int i = 0, j = nums.size() - 1;
      int count = 0;
      while (i<j){
            int sum = nums[i]+nums[j];
            if(sum < target){
                  count = count + j - i;
                  i++;

            }
            else {
                  j--;
            }
      }
      return count;
}

vector<int> twoSum(vector<int>& nums, int target){
      unordered_map<int, int> map; // key value pair
      int i = 0, j = nums.size() - 1;
      while (i < nums.size()){
            int val = target - nums[i];
            if (map.count(val)){
                  return {map[val], i};
            }
            map[nums[i]] = i;
            i++;
      }
      return {};
}

vector<int> twoSumII(vector<int>& numbers, int target){
      int i = 0, j = numbers.size() - 1;
      while (i < j){
            int sum = numbers[i] + numbers[j];
            if (sum == target){
                  return {i+1, j+1};
            }
            else if (sum > target) j--;
            else {
                  i++;
            }
      }
      return {};
}

vector<vector<int>> threeSum(vector<int>& nums){
      sort(nums.begin(), nums.end());
      int target = 0;
      vector<vector<int>> ans;
      // int f= 0, i = f + 1, j = nums.size() - 1;
      for (int f = 0; f < nums.size() - 2; f++){
            if (f > 0 && nums[f] == nums[f - 1]) continue;
            int i = f + 1, j = nums.size() - 1;

            while (i < j){
                  int sum = nums[i] + nums[j] + nums[f];
                  if (sum > target){
                        j--;
                  }
                  else if (sum < target){
                        i++;
                  }
                  else {
                        ans.push_back({nums[f],nums[i],nums[j]});
                        while (i < j && nums[i] == nums[i+1]) i++;
                        while (i < j && nums[j] == nums[j - 1]) j--;
                        i++; j--;
                  }
            }
            
      }
      return ans;
}

};