#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    char arr[10] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        int tmp = n % 10;
//        arr[i] = tmp + '0';
//        i++;
//        n = n / 10;
//    }
//    printf("%s", arr);
//    return 0;
//}

int main()
{
    int n;
    int arr[100] = { 0 };
    int count = 0;
    int s = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        count = 1;
        arr[count] = 0;
    }

    while (n)
    {
        count++;
        arr[count] = n % 6;
        n /= 6;
    }

    for (int i = count; i > 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}