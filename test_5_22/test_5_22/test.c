#define _CRT_SECURE_NO_WARNINGS 1

typedef struct {
    Stack pushst;
    Stack popst;

} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    StackInit(&obj->pushst);
    StackInit(&obj->popst);

    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    StackPush(&obj->pushst, x);

}

int myQueuePop(MyQueue* obj) {

    if (StackEmpty(&obj->popst))
    {
        while (!StackEmpty(&obj->pushst))
        {
            StackPush(&obj->popst, StackTop(&obj->pushst));
            StackPop(&obj->pushst);
        }
    }
    int top = StackTop(&obj->popst);
    StackPop(&obj->popst);
    return top;
}

int myQueuePeek(MyQueue* obj) {

    if (StackEmpty(&obj->popst))
    {
        while (!StackEmpty(&obj->pushst))
        {
            StackPush(&obj->popst, StackTop(&obj->pushst));
            StackPop(&obj->pushst);
        }
    }

    int top = StackTop(&obj->popst);
    return top;
}

bool myQueueEmpty(MyQueue* obj) {

    return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
}

void myQueueFree(MyQueue* obj) {

    StackDestroy(&obj->pushst);
    StackDestroy(&obj->popst);

    free(obj);
}