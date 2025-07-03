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

        ListNode*temp=head;
        if(head->next==NULL)
        {
            return NULL;
        }
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
       int x=count/2;
     ListNode*t=NULL;
     temp=head;
       while(x--)
       {
        t=temp;
          temp=temp->next;
          
       }

       t->next=temp->next;
       delete temp;

   return head; 
    }
};