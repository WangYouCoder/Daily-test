#define _CRT_SECURE_NO_WARNINGS 1
char* convert(char* s, int numRows) {


    int len = strlen(s);
    if (numRows == 1)
        return s;

    char* str = (char*)malloc(sizeof(char) * len + 1);
    int k = 0;
    int num = (numRows - 1) * 2;
    int i, j;
    for (i = 0; i < numRows; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (j % num == i || j % num == num - i)
                str[k++] = s[j];
        }
    }
    str[k] = '\0';
    return str;
}