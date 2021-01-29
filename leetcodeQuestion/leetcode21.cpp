/*
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
*/

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

#include<iostream>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode *res = new ListNode();
      ListNode *cur = res;
      while(l1!=nullptr && l2!=nullptr){
        if(l1->val<=l2->val){
          cur->next = l1;
          l1 = l1->next;
        }else(l1->val>l2->val){
          cur->next=l2;
          l2 = l2->next;
          }
        cur = cur->next;
      }
      if(l1==nullptr)
        cur->next = l2;
      else if(l2==nullptr)
        cur->next = l1;
      return res->next;
    }
};

