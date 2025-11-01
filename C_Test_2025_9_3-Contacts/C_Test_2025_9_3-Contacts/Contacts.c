#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts.h"



void InitContacts(con* pc)
{
	FILE* pr = fopen("Contacts.txt", "r");
	if (pr == NULL)
	{
		pc->p = calloc(4, sizeof(Peo));
		pc->capacity = 4;
		pc->size = 0;
		return;
	}
	fscanf(pr, "%zu %zu\n", &(pc->size), &(pc->capacity));
	pc->p = calloc(pc->capacity, sizeof(Peo));
	for (int i = 0; i < pc->size; i++)
	{
		fscanf(pr, "%s %d %s %s\n", pc->p[i].name, &(pc->p[i].age), pc->p[i].sex, pc->p[i].tele);
	}
	fclose(pr);
	pr = NULL;
}

void ContactsBreak(con* pc)
{
	free(pc->p);
	pc->p == NULL;
	pc->size = 0;
	pc->capacity = 0;
}

void ContactsCheck(con* pc)
{
	assert(pc);
	if (pc->capacity == pc->size)
	{
		int NewCapacity = 2 * pc->capacity;
		Peo* tmp = realloc(pc->p, NewCapacity * sizeof(Peo));
		if (tmp == NULL)
		{
			perror("realloc");
			return;
		}
		pc->p = tmp;
		pc->capacity = NewCapacity;
	}
}

void ContactsPushFront(con* pc)
{
	ContactsCheck(pc);
	printf("请输入->名字 年龄 性别 电话号码\n");
	memmove(&pc->p[1], &pc->p[0], pc->size * sizeof(Peo));
	scanf("%s %zu %s %s", pc->p->name, &(pc->p->age), pc->p->sex, pc->p->tele);
	pc->size++;
}

void ContactsPrint(con* pc)
{
	assert(pc);
	if (pc->size == 0 || pc->capacity == 0)
		return;
	printf("*********************************************\n");
	for (int i = 0; i < pc->size; i++)
	{
		printf("%d.       %s %zu %s %s\n", i+1,pc->p[i].name, pc->p[i].age, pc->p[i].sex, pc->p[i].tele);
	}
	printf("*********************************************\n");
}
void ContactsPushBack(con* pc)
{
	ContactsCheck(pc);
	printf("请输入->名字 年龄 性别 电话号码\n");
	scanf("%s %zu %s %s", pc->p[pc->size].name, &(pc->p[pc->size].age), pc->p[pc->size].sex, pc->p[pc->size].tele);
	pc->size++;
}

void ContactsInsert(con* pc)
{
	ContactsCheck(pc);
	again:
	printf("请输入->插入序号 名字 年龄 性别 电话号码\n");
	size_t pose = 0;
	char name[31] = {0};
	size_t age;
	char sex[11] = { 0 };
	char tel[12] = { 0 };
	scanf("%zu %s %zu %s %s", &pose,name,&age,sex,tel);
	if (pose <1 || pose>pc->size+1)
	{
		printf("输入错误\n");
		goto again;
	}
	memmove(&(pc->p[pose]), &(pc->p[pose - 1]), (pc->size - pose + 1) * sizeof(Peo));
	strcpy(&(pc->p[pose - 1].name), name);
	pc->p[pose - 1].age = age;
	strcpy(&(pc->p[pose - 1].sex), sex);
	strcpy(&(pc->p[pose - 1].tele), tel);
	pc->size++;
}

void ContactsErase(con* pc)
{
	ContactsCheck(pc);
	again:
	printf("请输入删除序号->");
	size_t pose = 0;
	scanf("%zu", &pose);
	if (pose <1 || pose>pc->size)
	{
		printf("输入错误\n");
		goto again;
	}
	memmove(&(pc->p[pose-1]), &(pc->p[pose]), (pc->size - pose) * sizeof(Peo));
	pc->size--;
}

void ContactsPopFront(con*pc)
{
	memmove(&(pc->p[0]), &(pc->p[1]), (pc->size - 1) * sizeof(Peo));
	pc->size--;
}
void ContactsPopBack(con* pc)
{
	pc->size--;
}


void ContactsSave(con* pc)
{
	FILE* ps = fopen("Contacts.txt", "w");
	assert(ps);
	fprintf(ps, "%zu %zu\n", pc->size, pc->capacity);
	for (int i = 0; i < pc->size;i++)
	{
		fprintf(ps, "%s %d %s %s\n", pc->p[i].name, pc->p[i].age, pc->p[i].sex, pc->p[i].tele);
	}
	fclose(ps);
	ps = NULL;
}

void ContactsChange(con* pc)
{
	ContactsCheck(pc);
again:
	printf("请输入->修改序号 名字 年龄 性别 电话号码\n");
	size_t pose = 0;
	char name[31] = { 0 };
	size_t age;
	char sex[11] = { 0 };
	char tel[12] = { 0 };
	scanf("%zu %s %zu %s %s", &pose, name, &age, sex, tel);
	if (pose <1 || pose>pc->size + 1)
	{
		printf("输入错误\n");
		goto again;
	}
	strcpy(&(pc->p[pose - 1].name), name);
	pc->p[pose - 1].age = age;
	strcpy(&(pc->p[pose - 1].sex), sex);
	strcpy(&(pc->p[pose - 1].tele), tel);
}

void ContactsFind(con* pc)
{
	int input = 0;
	int r = 1;
	do {
		printf("1名字查找 2电话号码查找 0退出\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("请输入名字->\n");
			char name[30];
			scanf("%s", name);
			for (int i = 0; i < pc->size; i++)
			{
				r =strcmp(name, pc->p[i].name);
				if (r == 0)
				{
					printf("第%d位\n", i + 1);
					break;
				}
			}
			if (r != 0)
				printf("不存在\n");
			break;
		case 2:
			printf("请输入号码->\n");
			char tel[12];
			scanf("%s", tel);
			for (int i = 0; i < pc->size; i++)
			{
				r = strcmp(tel, pc->p[i].tele);
				if (r == 0)
				{
					printf("第%d位\n", i + 1);
					break;
				}
			}
			if (r != 0)
				printf("不存在\n");
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return;
}