#include <bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};


class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
      // Time Complexity: O(h) 
      // Space Complexity: O(h)
     /*
      unordered_set<Node*> seen;

      while (p != nullptr){
            seen.insert(p);
            p = p->parent;
      }

      while (q != nullptr){
            if (seen.count(q)){
                  return q;
            }
            q = q->parent;
      }
      */

      // Time Complexity: O(h) 
      // Space Complexity: O(1) 
      Node* a = p;
      Node* b = q;
      
      while (a != b){
            if (a == nullptr) a = q;
            else a = a->parent;

            if (b = nullptr) b = p;
            else b = b->parent;
      }


      return a;
        
    }
};