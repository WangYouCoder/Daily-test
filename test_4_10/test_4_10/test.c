#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define maxn 64
//int a[maxn + 1][maxn + 1] = { 0 };
//void gamecal(int k, int n);
//void gamecal(int k, int n)//������k��ʼ��n��ѡ�ֵ��ճ� 
//{
//    int i, j;
//    if (n == 2)
//    {
//        a[k][1] = k;//����ѡ�ֱ�� 
//        a[k][2] = k + 1;//����ѡ�ֱ�� 
//        a[k + 1][1] = k + 1;//����ѡ�ֱ�� 
//        a[k + 1][2] = k;//����ѡ�ֱ��   2��ѡ�ֶ���1��ѡ�� 
//    }
//    else {
//        gamecal(k, n / 2);
//        gamecal(k + n / 2, n / 2); // ���ĸ�ѡ��Ϊ����3��ѡ�ֿ�ʼ����2��ѡ�� 
//        for (i = k; i < k + n / 2; i++)//���������Ͻ� 
//        {
//            for (j = n / 2 + 1; j <= n; j++)
//            {
//                a[i][j] = a[i + n / 2][j - n / 2];
//            }
//        }
//        for (i = k + n / 2; i < k + n; i++)//���������½� 
//        {
//            for (j = 1 + n / 2; j <= n; j++)
//            {
//                a[i][j] = a[i - n / 2][j - n / 2];
//            }
//        }
//    }
//}
//int main() {
//    int m, i, j;
//    printf("���������ѡ�ֵ�����:");
//    scanf("%d", &m);
//    j = 2;
//    for (i = 2; i < 8; i++)//�ж��Ƿ�Ϊ2����������
//    {
//        j = j * 2;
//        if (j == m) break;
//    }
//    if (i >= 8)
//    {
//        printf("����ѡ����������Ϊ2���������ݣ��Ҳ�����64��\n");
//        return 0;
//    }
//    gamecal(1, m);
//    printf("\n���");
//    for (i = 2; i <= m; i++)
//        printf("%2d��", i - 1);
//    printf("\n");
//    for (i = 1; i <= m; i++)
//    {
//        for (j = 1; j <= m; j++)
//            printf("%4d", a[i][j]);//��ȫ�ֱ�������a[][]���������
//        printf("\n");
//    }
//    return 0;
//}

void rotate(int nums[], int numsSize, int k) {
    while (k--)
    {
        int tmp = nums[numsSize - 1];
        for (int i = numsSize - 1; i >= 0; i--)
        {
            nums[i] = nums[i - 1];
        }
        nums[0] = tmp;
    }
    return nums;
}
int main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
    rotate(arr, 7, 3);
    printf(arr);
    return 0;
}


