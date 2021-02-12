#include<iostream>

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
    struct ListNode{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr){};
    };
    ListNode *swapPairs(ListNode *head)
    {
      ListNode *dummy = (ListNode *)malloc(sizeof(ListNode));
      dummy->next = head;
      ListNode *ptr = dummy;
      ListNode *p1 = ptr;
      ListNode *p2;
      if (p1->next==nullptr||p1->next->next==nullptr)
        return head;
      while (p1->next!=nullptr&&p1->next->next!=nullptr){
        ptr = p1;
        p1 = ptr->next;
        p2 = ptr->next -> next;
        ptr->next = p2;
        p1->next = p2->next;
        p2->next = p1;
      }
      return dummy->next;
    }
};