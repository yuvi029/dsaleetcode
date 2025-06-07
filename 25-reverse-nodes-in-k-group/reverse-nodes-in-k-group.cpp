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

    // Returns the kth node from the given node
    ListNode* kthnode(ListNode* temp, int k) {
        k -= 1;
        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    // Reverses the linked list and returns new head
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev; // new head
    }

    // Main function to reverse every k group
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevlast = NULL;
        ListNode* newHead = NULL;

        while (temp != NULL) {
            ListNode* knode = kthnode(temp, k);
            if (knode == NULL) {
                if (prevlast) prevlast->next = temp;
                break;
            }

            ListNode* nextnode = knode->next;
            knode->next = NULL;

            ListNode* reversedHead = reverse(temp); // reverse this k-group

            if (newHead == NULL) {
                newHead = reversedHead; // update new head only once
            } else {
                prevlast->next = reversedHead;
            }

            prevlast = temp; // temp is now the tail of reversed sublist
            temp = nextnode;
        }

        return newHead;
    }
};
