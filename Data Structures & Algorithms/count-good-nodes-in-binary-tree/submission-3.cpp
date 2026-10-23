class Solution {
public:
    int goodNodes(TreeNode* root) {
        return dfs(root, INT_MIN);
    }

private:
    int dfs(TreeNode* root, int currMax) {
        if (!root)
            return 0;

        int rootAnswer = 0;

        if (root->val >= currMax) {
            rootAnswer = 1;
        }

        currMax = max(currMax, root->val);

        int lans = dfs(root->left, currMax);
        int rans = dfs(root->right, currMax);

        return rootAnswer + lans + rans;
    }
};