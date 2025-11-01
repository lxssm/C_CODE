#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

int main()
{
	st Stack = { 0 };
	void (*ps[4])(st*) = { NULL,StackPush,StackPop,StackTop };
	int input = 0;
	InitStack(&Stack);
	StackPrint(&Stack);
	do {
		printf("ÇëÊäÈë->\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
			case 2:
			case 3:
				ps[input](&Stack);
				break;
			case 0:
				break;
			default:
				printf("ÊäÈë´íÎó\n");
				break;
		}
	} while (input);


	StackBreak(&Stack);
	return 0;
}