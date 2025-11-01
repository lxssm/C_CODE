#include "Tree.h"

//      1
//  2      5
//3  4   6 3
//              4

int main()
{
	BTNode* n1 = BinaryTreeCreate(1);
	BTNode* n2 = BinaryTreeCreate(2);
	BTNode* n3 = BinaryTreeCreate(3);
	BTNode* n4 = BinaryTreeCreate(4);
	BTNode* n5 = BinaryTreeCreate(5);
	BTNode* n6 = BinaryTreeCreate(6);
	BTNode* n7 = BinaryTreeCreate(3);
	BTNode* n8 = BinaryTreeCreate(4);
	n1->left = n2;
	n1->right = n5;
	n2->left = n3;
	n2->right = n4;
	n5->left = n6;
	n5->right = n7;
	n7->right = n8;
	BinaryTreePrevOrder(n1);
	printf("\n");
	BinaryTreeInOrder(n1);
	printf("\n");
	BinaryTreePostOrder(n1);
	printf("\n");
	BinaryTreeLevelOrder(n1);
	printf("\n");
	printf("\nsize:%u", BinaryTreeSize(n1));
	printf("\nleaf:%u",BinaryTreeLeafSize(n1));
	printf("\nlevel2nums:%u\n", BinaryTreeLevelKSize(n1, 2));
	BinaryTreeFind(n1, 4);
	printf("\n");
	bool ret = BinaryTreeComplete(n1);
	if (ret)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}