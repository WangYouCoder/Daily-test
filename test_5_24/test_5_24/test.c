#define _CRT_SECURE_NO_WARNINGS 1

//给定一个二叉树，找出其最大深度。

//二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
int maxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if (left > right)
    {
        return left + 1;
    }
    else
    {
        return right + 1;
    }
}