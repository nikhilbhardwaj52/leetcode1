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
    ListNode* sortList(ListNode* head) {

        ListNode* temp=head;
        vector<int>vect;
        
        while(temp)
        {
           vect.push_back(temp->val);
           temp=temp->next;

        }
        
      sort(vect.rbegin(),vect.rend());
         ListNode*headd=NULL;
        for(int i=0;i<vect.size();i++)
        { 
            if(headd==NULL)
            {
                headd=new ListNode(vect[i]);

            }
            else
            {
                ListNode *temp=new ListNode(vect[i]);
                temp->next=headd;
                headd=temp;

            }

        }
        return headd;
    }
};