class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* temp = head;            // odd pointer
        ListNode* temp2 = head->next;     // even pointer
        ListNode* t = temp2;              // store even head

        while (temp2 && temp2->next) {
            temp->next = temp2->next;     // odd connects to next odd
            temp = temp->next;            // move odd forward

            temp2->next = temp->next;     // even connects to next even
            temp2 = temp2->next;          // move even forward
        }

        temp->next = t;                   // connect end of odd to start of even
        return head;
    }
};
