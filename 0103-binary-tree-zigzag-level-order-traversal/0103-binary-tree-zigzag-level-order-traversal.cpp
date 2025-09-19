/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         
         queue<TreeNode*>q;
         vector<int>v1;
         vector<vector<int>>v2;
         if(!root)return v2;
         bool flag=false;
         q.push(root);

         while(!q.empty())
         {
            int n=q.size();
            v1.clear();
            

            for(int i=0;i<n;i++)
         {
           
            TreeNode*temp=q.front();
            q.pop();
            v1.push_back(temp->val);

            
                if(temp->left)
                q.push(temp->left);
                
                if(temp->right)
                q.push(temp->right);
            

         }

         if(flag)
         {
            reverse(v1.begin(),v1.end());
         }

          flag=!flag;
          v2.push_back(v1);
        

         }
        return v2;
    }
};