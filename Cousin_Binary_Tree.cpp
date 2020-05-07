/**Definition for a binary tree node.
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/
class Solution {
public:
bool isCousins(TreeNode root, int x, int y) {

 int dx=-1,dy=-1,d=0;     //depth variable
 TreeNode* tmp =root;
 TreeNode* xp; TreeNode* yp; // parent pointers of x and y
 queue<TreeNode*> q, q1;     // queues for level pointer
 q.push(tmp);
 while(!q.empty() && (dx==-1 || dy==-1) )
 {
     tmp=q.front();
     q.pop();    
     if(tmp->left != nullptr)
     {
         if(tmp->left->val == x)
         {
         xp=tmp;
         dx=d+1;
         }
          if(tmp->left->val == y)
         {
         yp=tmp;
              dy=d+1;
         }
         q1.push(tmp->left);
     }
     if(tmp->right != nullptr)
     {
         if(tmp->right->val == x)
         {
         xp=tmp;
             dx=d+1;
         }
          if(tmp->right->val == y)
         {
         yp=tmp;
              dy=d+1;
         }
          q1.push(tmp->right);
     }
     if(q.empty())
     {
         ++d;                //level maintainance
         while(!q1.empty())
         {
             q.push(q1.front());
             q1.pop();
         }
     }           
 }
 if(dx==dy && xp != yp)
     return true;
 else
     return false;

}
};
