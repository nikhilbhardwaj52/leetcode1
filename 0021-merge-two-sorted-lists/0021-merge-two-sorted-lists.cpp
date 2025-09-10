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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

       ListNode* temp=list1;
       ListNode* temp1=list2;

       vector<int>v1;

       while(temp!=NULL)
       {
          v1.push_back(temp->val);
        
          temp=temp->next;
       }

       while(temp1!=NULL)
       {
           v1.push_back(temp1->val);
           temp1=temp1->next;
       }

      
      sort(v1.rbegin(),v1.rend());

      ListNode* head=NULL;


      for(int i=0;i<v1.size();i++)
      {
        if(head==NULL)
        {
            head=new ListNode(v1[i]);

        }
        else
        {
           ListNode*temp2;
            temp2=new ListNode(v1[i]);
            temp2->next=head;
            head=temp2;            
        }
          
      }
        return head;
    }
};