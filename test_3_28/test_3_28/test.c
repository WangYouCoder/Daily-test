#define _CRT_SECURE_NO_WARNINGS 1
//�žų˷���
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%2d ", j, i, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
	//д�ļ�
	//���·��
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	////����·��
	//FILE* p = fopen("C:\\Users\\��˧��\\Desktop\\test2.txt", "w");
	//if (p == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	//FILE* pc = fopen("C:\\Users\\��˧��\\Desktop\\test2.txt", "r");
	//if (pc == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}


	////�ر��ļ�
	//fclose(pc);
	//pc = NULL;
	//return 0;


	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;
	//return 0;
//}


//                            д�ļ�
//int main()
//{
//	//����·��
//	FILE* p = fopen("C:\\Users\\��˧��\\Desktop\\test2.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, p);
//	}
//
//	//�ر��ļ�
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//                    ���ļ�
//int main()
//{
//	//����·��
//	FILE* p = fopen("C:\\Users\\��˧��\\Desktop\\test2.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int i = 0;
//	int ch = 0;
//	for (i = 0; i < 26; i++)
//	{
//		ch = fgetc(p);
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(p);
//	p = NULL;
//	return 0;
//}