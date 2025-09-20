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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>vt2;
        
         vector<int>vt1;

         if(root==NULL) return vt2;
         queue<TreeNode*>q;
         q.push(root);

         while(!q.empty())
         {
            int n=q.size();
            vt1.clear();
            for(int i=0;i<n;i++)
            {
            TreeNode*temp=q.front();
            q.pop();
            vt1.push_back(temp->val);

            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            }
            vt2.push_back(vt1);
         }
      
       reverse(vt2.begin(),vt2.end());
       return vt2; 
    }
};