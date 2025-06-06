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
    ListNode* merge2sort(ListNode* list1,ListNode* list2){
        ListNode* dnode=new ListNode(-1);
        ListNode* temp=dnode;
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                temp->next=list1;
                list1=list1->next;;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        if(list1 != NULL){
            temp->next=list1;
        }
        else{
            temp->next=list2;
        }
        return dnode->next;
    }
    ListNode* middlenode(ListNode* head){
        if( head== NULL || head->next->next==NULL)  return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while( fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next==NULL) return head;
        ListNode* middle= middlenode( head);
        ListNode* lefthead=head;
        ListNode* rhead=middle->next;
        middle->next=NULL;
        lefthead=sortList(lefthead);
        rhead=sortList(rhead);
        return merge2sort(lefthead,rhead);
    }
};