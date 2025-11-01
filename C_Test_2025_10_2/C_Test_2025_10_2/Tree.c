#include "Tree.h"

BTNode* BinaryTreeCreate(BTDataType n)
{
	BTNode* newcode = malloc(sizeof(BTNode));
	newcode->data = n;
	newcode->left = NULL;
	newcode->right = NULL;
	return newcode;
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf(PRINT_FORMAT, root->data);
	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	BinaryTreeInOrder(root->left);
	printf(PRINT_FORMAT, root->data);
	BinaryTreeInOrder(root->right);
}

void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	BinaryTreePostOrder(root->left);
	BinaryTreePostOrder(root->right);
	printf(PRINT_FORMAT, root->data);

}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
}

size_t BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

size_t BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

size_t BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (k == 1)
	{
		return 1;
	}
	k--;
	return BinaryTreeLevelKSize(root->left, k) + BinaryTreeLevelKSize(root->right, k);
}

void BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return;
	}
	BinaryTreeFind(root->left, x);
	BinaryTreeFind(root->right, x);

	if (root->data == x)
	{
		printf("%p ",root);
	}

	return;
}

void QueueCheck(Queue* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		Data* NewQueue = realloc(ps->Head, sizeof(Data) * ps->capacity * 2);
		assert(NewQueue);
		ps->Head = NewQueue;
		ps->capacity *= 2;
	}
}


void QueuePush(Queue* qu, BTNode* root)
{
	assert(qu && root);
	QueueCheck(qu);
	qu->rear = (qu->rear + 1) % (qu->capacity);
	Data* num = qu->Head;
	num[qu->rear].data = root->data;
	num[qu->rear].tree = root;
	qu->size++;
}

void QueuePop(Queue* qu)
{
	assert(qu);
	qu->front = (qu->front+1)%qu->capacity;
	qu->size--;
}
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue* qu = malloc(sizeof(Queue));
	qu->Head = malloc(sizeof(Data)*4);
	qu->front = 0;
	qu->rear = -1;
	qu->capacity = 4;
	qu->size = 0;
	if (root == NULL)
	{
		return;
	}
	QueuePush(qu, root);
	while (qu->size)
	{
		BTNode* code = qu->Head[qu->front].tree;
		printf("%d ", qu->Head[qu->front].data);
		QueuePop(qu);
		if (code->left)
		{
			QueuePush(qu, code->left);
		}
		if (code->right)
		{
			QueuePush(qu, code->right);
		}
	}
}

void ifbool(bool* check, int* count, int* capacity,bool n)
{
	assert(check);
	if (capacity == count)
	{
		check = realloc(check,sizeof(bool) * *capacity * 2);
		*capacity *= 2;
	}
	check[*count] = n;
	*(count) = *(count)+1;
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue* qu = malloc(sizeof(Queue));
	qu->Head = malloc(sizeof(Data) * 4);
	qu->front = 0;
	qu->rear = -1;
	qu->capacity = 4;
	qu->size = 0;
	if (root == NULL)
	{
		return;
	}
	bool* check = calloc(0,sizeof(bool) * 4);
	int count = 0;
	int capacity = 4;
	QueuePush(qu, root);
	ifbool(check, &count, &capacity, true);
	while (qu->size)
	{
		BTNode* code = qu->Head[qu->front].tree;
		QueuePop(qu);
		if (code->left)
		{
			QueuePush(qu, code->left);
			ifbool(check, &count, &capacity, true);
		}
		else
		{
			ifbool(check, &count, &capacity, false);
		}
		if (code->right)
		{
			QueuePush(qu, code->right);
			ifbool(check, &count, &capacity, true);
		}
		else
		{
			ifbool(check, &count, &capacity, false);
		}
	}
	bool* tmp = check;
	for (int i = 0; i < count; i++)
	{
		if (*tmp == false)
		{
			int n = i;
			while (n < count)
			{
				if (*tmp)
				{
					return false;
				}
				tmp++;
				n++;
			}
			return true;
		}
		tmp++;
	}
	return true;
}
//    1
//   1 1
//  1 1 1 0
//2n - 2^h-1 + 1 = 3
//      1
//    1   1
//  1  1 1 1
//1 1 1
//10
//2n-2^h-1 + 1 + 2^h-2 - (2n-2^h-1+1)/2
//                      +  2^h-2 - n+2^h-2-0.5
// 2n+1 -n+0.5
// // n+ 0.5
//             