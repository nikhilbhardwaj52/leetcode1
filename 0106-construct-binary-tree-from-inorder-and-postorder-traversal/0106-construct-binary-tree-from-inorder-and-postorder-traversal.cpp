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
    TreeNode* Tree(vector<int>&inorder,vector<int>&postorder,int start,int end,int &index,unordered_map<int,int>&mp)
    {
          
          if(start>end)
          return NULL;
          int curr=postorder[index--];
          TreeNode*root=new TreeNode(curr);
          int pos=mp[curr];
          root->right=Tree(inorder,postorder,pos+1,end,index,mp);
          root->left=Tree(inorder,postorder,start,pos-1,index,mp);

        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
           
        int index=postorder.size()-1;
       return Tree(inorder,postorder,0,inorder.size()-1,index,mp);
        
    }
};