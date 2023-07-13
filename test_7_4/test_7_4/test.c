#define _CRT_SECURE_NO_WARNINGS 1

BTNode* BTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;

	if (root->val == x)
		return root;

	BTNode* ret1 = BTreeFind(root->left, x);

	if (ret1 != NULL)
		return ret1;

	BTNode* ret2 = BTreeFind(root->right, x);

	if (ret2 != NULL)
		return ret2;

	//if (ret1 == NULL && ret2 == NULL)

	return NULL;
}