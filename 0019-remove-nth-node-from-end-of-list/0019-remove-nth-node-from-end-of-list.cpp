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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
           int x=count-n;

        if (x == 0) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }
     
        
        temp=head;
        ListNode* prev=NULL;

        while(x--)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next = temp->next;
        delete temp;



     return head;   
    }
};