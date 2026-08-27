#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list. */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
      ListNode* reverseLinkedList(ListNode* head){
            ListNode* prev = nullptr;
            while (head != nullptr){
                  ListNode* next = head->next;
                  head->next = prev;
                  prev = head;
                  head = next;
            }
            return prev;
      }
    bool isPalindrome(ListNode* head) {
      // Find Middle Node
      ListNode* slow = head;
      ListNode* fast = head;

      while (fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
      }
      // reverse Linked List
      ListNode* second = reverseLinkedList(slow);
      // compare
      ListNode* first = head;

      while (second != nullptr){
            if (first->val != second->val){
                  return false;
            }
            first = first->next;
            second = second->next;
      }
      return true;
    }
};
// Time: O(n) + O(n) = O(n)
// Space: O(1)