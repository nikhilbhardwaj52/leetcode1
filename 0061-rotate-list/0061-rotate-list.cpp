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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* temp=head;
        int length=0;
        if(head==NULL)return NULL;
        while(temp)
        {  
            length++;
            temp=temp->next;
        }
        k=k%length;
        if(k==0)return head;
        length-=k;
        ListNode*curr=head;
        ListNode*prev=NULL;
        while(length--)
        {
            prev=curr;
            curr=curr->next;
            
            
        }
        prev->next=NULL;
        ListNode*tail=curr;
        while(tail->next)
            {
                tail=tail->next;
            }
        tail->next=head;
      return curr;  
    }
};