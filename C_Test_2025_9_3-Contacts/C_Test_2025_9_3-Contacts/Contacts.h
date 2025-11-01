#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>

typedef struct PeoInfo {
	char name[30];
	size_t age;
	char sex[10];
	char tele[12];
}Peo;

typedef struct Contacts {
	Peo* p;
	size_t size;
	size_t capacity;
}con;

void ContactsCheck(con* pc);
void InitContacts(con* pc);
void ContactsPushFront(con* pc);
void ContactsPrint(con* pc);
void ContactsPushBack(con* pc);
void ContactsBreak(con* pc);
void ContactsInsert(con* pc);
void ContactsErase(con* pc);
void ContactsPopFront(con* pc);
void ContactsPopBack(con* pc);
void menu();
void ContactsSave(con* pc);
void ContactsFind(con* pc);
void ContactsChange(con* pc);