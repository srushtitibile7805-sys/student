class Solution {
public:
    int count = 0;

    pair<int, int> solve(TreeNode* root) {
        if (root == NULL)
            return {0, 0};

        pair<int, int> left = solve(root->left);
        pair<int, int> right = solve(root->right);

        int sum = root->val + left.first + right.first;
        int nodes = 1 + left.second + right.second;

        if (root->val == sum / nodes)
            count++;

        return {sum, nodes};
    }

    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return count;
    }
};