#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

int main()
{
	qu Queue = { 0 };
	void (*Qu[4])(qu*) = { NULL,QueuePush,QueuePop,QueueFront};
	InitQueue(&Queue);
	QueuePrint(&Queue);
	int input = 0;
	do {
		printf("ÇëÊäÈë->");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
		case 2:
		case 3:
			Qu[input](&Queue);
			break;
		case 0:
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}
	} while (input);
	QueueBreak(&Queue);

	return 0;
}
