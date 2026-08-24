#include <bits/stdc++.h>
using namespace std;

/* Structure of Linked List Node*/
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) break;

        }
        if (fast == nullptr || fast->next == nullptr){
            return 0;
        }
        slow = head;
        while (slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        Node* curr = slow->next;
        int len = 1;
        while (curr != slow){
            len = len + 1;
            curr = curr->next;
        }
        return len;

        
    }
};