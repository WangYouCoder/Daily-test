#define _CRT_SECURE_NO_WARNINGS 1

//����һ�����������ҳ��������ȡ�

//�����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
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