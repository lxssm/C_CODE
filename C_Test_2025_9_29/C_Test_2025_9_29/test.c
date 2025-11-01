#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

int main()
{
	Queue Queue1 = { 0 };
	void (*Qu[4])(Queue*) = { NULL,QueuePush,QueuePop,QueueTop };
	InitQueue(&Queue1);
	QueuePrint(&Queue1);
	int input = 0;
	do {
		printf("ÇëÊäÈë->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		case 2:
		case 3:
			Qu[input](&Queue1);
		case 0:
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}
	} while (input);
	QueueBreak(&Queue1);

	return 0;
}
