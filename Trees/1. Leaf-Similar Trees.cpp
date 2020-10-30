//872. Leaf-Similar Trees

/**

          3
        /    \
      5       1          
    /  \     / \ 
   6    2   9   8
       / \
      7   4
      
      
          3
        /    \
      9       8       
    /  \     / \ 
   6    7   9   8
       / \
      7   4
      
      output-yes
      
  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 */
static int x = []() {
std::ios::sync_with_stdio(false);
cin.tie(nullptr);
return 0; }();
class Solution {
public:
    void dfs(vector<int>&leaf, TreeNode *ptr)
    {
    if(ptr==NULL)
        return;
        if(ptr->left==NULL && ptr->right==NULL)
            leaf.push_back(ptr->val);
        dfs(leaf,ptr->left);
        dfs(leaf,ptr->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int>v1;
        vector<int>v2;
        dfs(v1,root1);
        dfs(v2,root2);
        
        return v1==v2;
    }
};
