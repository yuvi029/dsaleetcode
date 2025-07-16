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
    TreeNode* build(vector<int>& preorder, int prestart, int preend,vector<int>& inorder, int instart,int inend,map<int,int>& inmap){
        if(prestart>preend || instart>inend) return NULL;

        TreeNode* root=new TreeNode(preorder[prestart]); //first element of preorder is alwayas root
        int inroot=inmap[root->val];//root index in inorder
        int numsleft=inroot-instart;
        //iterating in left
        root->left=build(preorder,prestart+1,prestart+numsleft, inorder,instart,inroot-1,inmap);
        root->right=build(preorder,prestart+numsleft+1,preend,inorder,inroot+1,inend,inmap);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int m=preorder.size();
        map<int,int> inmap;
        for(int i=0;i<n;i++){
            inmap[inorder[i]]=i;
        }
        TreeNode* root=build(preorder,0,m-1,inorder,0,n-1,inmap);
        return root;
    }
};