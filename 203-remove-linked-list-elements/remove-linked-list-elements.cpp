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
    ListNode* removeElements(ListNode* head, int val) {
      //head
      ListNode* dnode=new ListNode(-1);
      dnode->next=head;
      while(head != NULL && head->val==val){
        ListNode* yuv=head;
        head=head->next;
        delete yuv;
      }
      
      //not head
        ListNode* fast=head;
        while(fast != NULL && fast->next != NULL){
            if(fast->next->val==val){
                ListNode* temp=fast->next;
                fast->next=fast->next->next;
                delete temp;
            }else{
            fast=fast->next;
            }
        }
        ListNode* newheas=dnode->next;
        delete dnode;
        return head;
    }
};