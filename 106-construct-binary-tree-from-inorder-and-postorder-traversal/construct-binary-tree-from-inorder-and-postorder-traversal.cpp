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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int m=postorder.size();
        if(m!=n) return NULL;
        map<int,int> hm;
        for(int i=0;i<n;i++){
            hm[inorder[i]]=i;
        }
        return build(inorder,0,n-1,postorder,0,m-1,hm);
        
    }
    TreeNode* build(vector<int>& inorder, int is, int ie, vector<int>& postorder, int ps,int pe, map<int,int>& hm){
        if(ps>pe ||is>ie ) return NULL;
        TreeNode* root=new TreeNode(postorder[pe]);
        int inroot=hm[postorder[pe]];
        int numsleft=inroot-is;

        root->left=build(inorder,is,inroot-1,postorder,ps,ps+numsleft-1,hm);
        root->right=build(inorder,inroot+1,ie,postorder,ps+numsleft,pe-1,hm);
        return root;
    }
};