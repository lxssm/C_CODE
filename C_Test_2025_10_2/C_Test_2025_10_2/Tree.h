#pragma once
typedef int BTDataType;
#define PRINT_FORMAT "%d "
#define FORMAT "%d"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

typedef struct Data {
	BTDataType data;
	BTNode* tree;
}Data;

typedef struct Queue {
	Data* Head;
	int front;
	int rear;
	int capacity;
	int size;
}Queue;


BTNode* BinaryTreeCreate(BTDataType n);

void BinaryTreeDestory(BTNode* root);

size_t BinaryTreeSize(BTNode* root);

size_t BinaryTreeLeafSize(BTNode* root);

size_t BinaryTreeLevelKSize(BTNode* root, int k);

void BinaryTreeFind(BTNode* root, BTDataType x);

void BinaryTreePrevOrder(BTNode* root);

void BinaryTreeInOrder(BTNode* root);

void BinaryTreePostOrder(BTNode* root);
bool BinaryTreeComplete(BTNode* root);

void BinaryTreeLevelOrder(BTNode* root);

void QueuePush(Queue* qu, BTNode* root);
void QueuePop(Queue* qu);