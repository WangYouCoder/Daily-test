#define _CRT_SECURE_NO_WARNINGS 1
bool isValid(char* s) {
    Stack st;
    StackInit(&st);

    while (*s)
    {
        if (*s == '('
            || *s == '{'
            || *s == '[')
        {
            StackPush(&st, *s);
        }
        else
        {
            if (StackEmpty(&st))
                return false;

            char top = StackTop(&st);
            StackPop(&st);

            if (top == '(' && *s != ')'
                || top == '{' && *s != '}'
                || top == '[' && *s != ']')
            {
                StackDestroy(&st);
                return false;
            }
        }
        s++;
    }

    bool ret = StackEmpty(&st);
    StackDestroy(&st);
    return ret;
}