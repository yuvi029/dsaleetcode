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
  ListNode* findknode(ListNode* temp, int k){
      int cnt=1;
      while( temp!= NULL){
        if(cnt==k) return temp;
        cnt++;
        temp=temp->next;
      }
      return temp;
  }


    ListNode* rotateRight(ListNode* head, int k) {
        //edge case
        if(head==NULL || k==0)  return head;

        //counting the length of the ll

        int len=1;
        ListNode* tail=head;
        while(tail->next != NULL){
            tail=tail->next;
            len++;
        }

        if(k%len==0) return head;
        k=k%len;

        //attach tail to the head
        tail->next=head;
        ListNode* newlastnode =findknode(head, len-k);
       head= newlastnode->next;
       newlastnode->next=NULL;
       return head;

    }
};