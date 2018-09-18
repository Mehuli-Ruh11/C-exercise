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
    void preorderTraversal(TreeNode* root, vector<int>& answer) {
        if (!root) {
            return;
        }
        answer.push_back(root->val);               // visit the root
        preorderTraversal(root->left, answer);     // traverse left subtree
        preorderTraversal(root->right, answer);    // traverse right subtree
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        preorderTraversal(root, answer);
        return answer;
    }
};
