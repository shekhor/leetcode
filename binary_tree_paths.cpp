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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> results;
        string strTemp;
        backTrack(root, "", results);
        return results;
    }

    void backTrack(TreeNode* root, string str, vector<string> &results){
        if(!root){
            return;
        }

        if(!root->left && !root->right){
            str += to_string(root->val);
            results.push_back(str);
            return;
        }else {
            str += to_string(root->val) + "->";
            backTrack(root->left, str, results);
            backTrack(root->right, str, results);
        }
    }
};
