#define _CRT_SECURE_NO_WARNINGS 1

//两个队列实现一个栈

typedef struct {
    Queue q1;
    Queue q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
    QueueInit(&obj->q1);
    QueueInit(&obj->q2);

    return obj;
}

void myStackPush(MyStack* obj, int x) {

    if (!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }

}

int myStackPop(MyStack* obj) {

    Queue* empty = &obj->q1;
    Queue* Nonempty = &obj->q2;
    if (!QueueEmpty(&obj->q1))
    {
        empty = &obj->q2;
        Nonempty = &obj->q1;
    }

    while (QueueSize(Nonempty) > 1)
    {
        QueuePush(empty, QueueFront(Nonempty));
        QueuePop(Nonempty);
    }

    int top = QueueFront(Nonempty);
    QueuePop(Nonempty);

    return top;
}

int myStackTop(MyStack* obj) {
    int top;
    if (!QueueEmpty(&obj->q1))
    {
        top = QueueBack(&obj->q1);
    }
    else
    {
        top = QueueBack(&obj->q2);
    }
    return top;
}

bool myStackEmpty(MyStack* obj) {

    return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
    QueueDestroy(&obj->q1);
    QueueDestroy(&obj->q2);


    free(obj);
}
