/* The structure of linked list Node*/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = nullptr;
  }
};


class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
          Node* slow = head;
          Node* fast = head->next;

          while (fast != head || fast->next != head){
            slow = slow->next;
            fast = fast->next;

            if(fast->next != head){
                  fast = fast->next;
            }
          }
          
          fast->next = slow->next;
          slow->next = head;
     return {head, fast->next};
    }
};