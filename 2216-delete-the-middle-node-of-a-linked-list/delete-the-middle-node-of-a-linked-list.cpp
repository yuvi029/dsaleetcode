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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            // If list has 0 or 1 node, return NULL
           // delete head;
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        // Now, 'slow' is the middle node, and 'prev' is the node before it
        prev->next = slow->next;//unnlink
       // delete slow;

        return head;
    }
};
