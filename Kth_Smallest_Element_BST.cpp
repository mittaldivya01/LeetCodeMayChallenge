/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 int k;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pos=0;
    TreeNode* var=nullptr;
    TreeNode* inorderkth(TreeNode* root)
    {
        if(root== nullptr)  return root;            
        if(root->left!=nullptr){
            var= inorderkth( root->left); 
            if(var!=nullptr) return var;
        } 
        --pos;
         if(pos==0) return root;
        
        if(root->right!= nullptr){
            var= inorderkth( root->right);
            if(var!=nullptr) return var;
        }       
        return var;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        pos=k;
        if(root== nullptr)  return -1;
        if(root!=nullptr) root=inorderkth(root);
        return root->val;
    }
};
