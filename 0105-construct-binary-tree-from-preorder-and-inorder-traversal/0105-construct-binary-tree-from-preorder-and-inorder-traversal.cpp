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
    int find(vector<int>in,int pos,int start,int end,int index)
    {
        for(int i=0;i<in.size();i++)
        {
            if(in[i]==pos)
            {
                return i;
            }
        }
        return -1;
    }
   TreeNode* Tree(vector<int>&pre,vector<int>&in,int instart,int inend,int &index,unordered_map<int,int>&mp)
   {
       
        if(instart>inend)
        {
              return NULL;
        }
        int curr=pre[index++];
        TreeNode* root=new TreeNode (curr);
        int pos=mp[curr];
        root->left=Tree(pre,in,instart,pos-1,index,mp);
        root->right=Tree(pre,in,pos+1,inend,index,mp);

      return root;
   }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
             
             unordered_map<int,int>mp;
             for(int i=0;i<inorder.size();i++)
             {
                mp[inorder[i]]=i;
             }
        int index=0;
        
       return Tree(preorder,inorder,0,inorder.size()-1,index,mp);
    }
};