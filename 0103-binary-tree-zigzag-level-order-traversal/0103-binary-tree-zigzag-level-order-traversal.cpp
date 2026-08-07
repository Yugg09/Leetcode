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
        queue<TreeNode*> q;
        vector<vector<int>> ans;

        if(root == NULL) return {};

        q.push(root);
        bool lefttoright = true;

        while(!q.empty()){
            int size = q.size();
             vector<int> levels;
            
            while(size--){
                TreeNode* node = q.front();
                q.pop();

                levels.push_back(node->val);

                if(node->left)
                q.push(node->left);

                if(node->right)
                q.push(node->right);
            }
            if(!lefttoright){
                 reverse(levels.begin() , levels.end());
                 ans.push_back(levels);
            }
            else{
                ans.push_back(levels);
            }
            lefttoright = !lefttoright;
        }

        return ans;
    }
};