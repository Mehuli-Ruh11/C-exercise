/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    void inorderTraversal(TreeNode* root, vector<int>& answer) {
        if (!root) {
            return;
        }
        inorderTraversal(root->left,answer); 
        answer.push_back(root->val);               // visit the root
        inorderTraversal(root->right, answer);    // traverse right subtree
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        inorderTraversal(root, answer);
        return answer;
    }
};
