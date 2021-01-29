/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*解题思路和141类似*/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode *> setCircle;
      while(head){
        
        if(setCircle.find(head)!=setCircle.end()){
          return head;
        }
        setCircle.insert(head);
        head = head->next;
      }
      return NULL;
    }
};