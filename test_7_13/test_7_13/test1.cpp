#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

int val = 0;

void test()
{
	cout << "val:" << &val << endl;
	cout << "static age:" << &age << endl;
}