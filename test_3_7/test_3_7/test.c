#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//����ˮ�ɻ���
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//�ȼ������λ��
		int tmp = i;
		int n = 1;
		while (tmp /= 10)
		{
			n++;
		}
		//���
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//�ж�
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}