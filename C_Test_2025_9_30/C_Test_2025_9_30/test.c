#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//队列实现栈
typedef struct Queue {
    int* Head;
    size_t Size;
    size_t Capacity;
}Queue;

typedef struct MyStack {
    struct Queue q1;
    struct Queue q2;
} MyStack;

void InitQueue(MyStack* obj)
{
    obj->q1.Head = malloc(sizeof(int) * 4);
    obj->q1.Size = 0;
    obj->q2.Size = 0;
    obj->q1.Capacity = 4;
    obj->q2.Capacity = 4;
    obj->q2.Head = malloc(sizeof(int) * 4);
}

MyStack* myStackCreate() {
    MyStack* Stack = malloc(sizeof(MyStack));
    InitQueue(Stack);
    return Stack;
}


void QueueCheck(Queue* ps)
{
    assert(ps);
    if (ps->Size == ps->Capacity)
    {
        int* NewQueue = realloc(ps->Head, sizeof(int) * ps->Capacity * 2);
        assert(NewQueue);
        ps->Head = NewQueue;
        ps->Capacity *= 2;
    }
}

bool queueIsEmpty(Queue* queue) {
    return queue->Size == 0;
}

void myStackPush(MyStack* obj, int x) {
    Queue* empty = &obj->q1;
    Queue* noempty = &obj->q2;
    if (!queueIsEmpty(&(obj->q1)))
    {
        empty = &obj->q2;
        noempty = &obj->q1;
    }
    QueueCheck(noempty);
    noempty->Head[noempty->Size] = x;
    noempty->Size++;
}



int myStackPop(MyStack* obj) {
    Queue* empty = &obj->q1;
    Queue* noempty = &obj->q2;
    if (!queueIsEmpty(&(obj->q1)))
    {
        empty = &obj->q2;
        noempty = &obj->q1;
    }
    if (noempty->Size > empty->Size)
    {
        int* NewQueue = realloc(empty->Head, sizeof(int) * noempty->Size);
        assert(NewQueue);
        empty->Head = NewQueue;
        empty->Capacity *= noempty->Size;
    }
    for (int i = 0; i < noempty->Size - 1; i++)
    {
        empty->Head[i] = noempty->Head[i];
        empty->Size++;
    }
    int val = noempty->Head[noempty->Size - 1];
    noempty->Size = 0;
    return val;
}

int myStackTop(MyStack* obj) {
    Queue* empty = &obj->q1;
    Queue* noempty = &obj->q2;
    if (!queueIsEmpty(&(obj->q1)))
    {
        empty = &obj->q2;
        noempty = &obj->q1;
    }
    return noempty->Head[noempty->Size - 1];
}

bool myStackEmpty(MyStack* obj) {
    return queueIsEmpty(&obj->q1) && queueIsEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
    free(obj->q1.Head);
    free(obj->q2.Head);
    free(obj);
}



//栈实现队列

typedef struct Stack {
    int* data;
    size_t size;
    size_t capacity;
}Stack;


typedef struct {
    struct Stack st1;
    struct Stack st2;
} MyQueue;

void InitStack(MyQueue* ps)
{
    ps->st1.data = malloc(sizeof(int) * 4);
    ps->st1.size = ps->st2.size = 0;
    ps->st2.data = malloc(sizeof(int) * 4);
    ps->st1.capacity = ps->st2.capacity = 4;
}

MyQueue* myQueueCreate() {
    MyQueue* Queue = malloc(sizeof(MyQueue));
    InitStack(Queue);
    return Queue;
}

bool StackEmpty(Stack* ps)
{
    return ps->size == 0;
}

void StackCheck(Stack* ps)
{
    if (ps->size == ps->capacity)
    {
        ps->data = realloc(ps->data, sizeof(int) * ps->capacity * 2);
        ps->capacity *= 2;
    }
}

void myQueuePush(MyQueue* obj, int x) {
    Stack* empty = &obj->st2;
    Stack* noempty = &obj->st1;
    StackCheck(noempty);
    noempty->data[noempty->size] = x;
    noempty->size++;
}

int myQueuePop(MyQueue* obj) {
    Stack* empty = &obj->st2;
    Stack* noempty = &obj->st1;
    if (StackEmpty(empty))
    {
        while (!StackEmpty(&obj->st1)) {
            int top = obj->st1.data[obj->st1.size - 1];
            obj->st1.size--;
            StackCheck(&obj->st2);
            obj->st2.data[obj->st2.size] = top;
            obj->st2.size++;
        }
    }
    int val = obj->st2.data[obj->st2.size - 1];
    obj->st2.size--;
    return val;
}

int myQueuePeek(MyQueue* obj) {
    Stack* empty = &obj->st1;
    Stack* noempty = &obj->st2;
    if (StackEmpty(&obj->st2)) {
        while (!StackEmpty(&obj->st1)) {
            int top = obj->st1.data[obj->st1.size - 1];
            obj->st1.size--;
            StackCheck(&obj->st2);
            obj->st2.data[obj->st2.size] = top;
            obj->st2.size++;
        }
    }
    return obj->st2.data[obj->st2.size - 1];
}

bool myQueueEmpty(MyQueue* obj) {
    return StackEmpty(&obj->st1) && StackEmpty(&obj->st2);
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}


//循环队列

typedef struct {
    int* data;
    int front;
    int rear;
    int size;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->front == -1;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return (obj->rear + 1) % obj->size == obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->data);
    free(obj);
}

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* Queue = malloc(sizeof(MyCircularQueue));
    Queue->data = malloc(sizeof(int) * k);
    Queue->front = -1;
    Queue->rear = -1;
    Queue->size = k;
    return Queue;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj))
    {
        return false;
    }
    if (myCircularQueueIsEmpty(obj))
    {
        obj->front = 0;
    }
    obj->rear = (obj->rear + 1) % obj->size;
    obj->data[obj->rear] = value;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return false;
    }
    if (obj->front == obj->rear) {
        obj->front = -1;
        obj->rear = -1;
    }
    else {
        obj->front = (obj->front + 1) % obj->size;
    }
    return true;
}
int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    return obj->data[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    return obj->data[obj->rear];
}