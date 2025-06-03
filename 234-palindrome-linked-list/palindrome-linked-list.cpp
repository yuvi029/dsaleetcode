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
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return true;
        }

        // Push all elements into stack
        stack<int> st;
        ListNode* temp = head;
        while (temp != NULL) {
            st.push(temp->val);  // use `val` or `data` depending on ListNode
            temp = temp->next;
        }

        // Compare elements while popping from stack
        temp = head;
        while (temp != NULL) {
            int top = st.top();
            st.pop();
            if (temp->val != top) {
                return false;
            }
            temp = temp->next;
        }

        return true;
    }
};
