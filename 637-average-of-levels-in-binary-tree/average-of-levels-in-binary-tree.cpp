/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>result;
        if (root == NULL)
            return result;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> res;
            int n = q.size();
            while (n) {
                TreeNode* curr = q.front();
                q.pop();
                res.push_back(curr->val);
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
                n--;
            }
            long long  totals=0;
            for(auto n:res){
                totals+=n;
            }
            double r=static_cast<double>(totals)/res.size();
            result.push_back(r);
        }
        return result;
    }
};