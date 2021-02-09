#include<iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode *dummy=(ListNode*)malloc(sizeof(ListNode));
      dummy->next = head;
      ListNode *p, *q;
      p = dummy;
      q = dummy;
      for (int i = 0; i < n+1;i++){
        q = q->next;
      }
      while(q!=nullptr){
        q = q->next;
        p = p->next;
      }
      p->next = p->next->next;
      return dummy->next;
    }
};