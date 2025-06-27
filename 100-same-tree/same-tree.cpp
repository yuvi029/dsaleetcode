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
    void preorder(TreeNode* root, vector<int>& ans){
        if(root==NULL) {
            ans.push_back(1001);
            return;
        } ;
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    vector<int> preorder2(TreeNode* root ){
        vector<int> ans;
       preorder(root,ans);
        return ans;

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> pans= preorder2(p);
        vector<int> qans=preorder2(q);
        if(pans==qans){
            return true;
        }
        return false;
    } 
};