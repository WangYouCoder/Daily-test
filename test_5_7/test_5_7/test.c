#define _CRT_SECURE_NO_WARNINGS 1

char* intToRoman(int num) {

    //��ϣ��

    //Ϊÿһ������������֮��ƥ������������������Ӵ�����ʼ������num�����Ŀǰ��������ͼ�ȥ����ÿ��һ�ζ�Ҫ���������������Ӧ���������֡����С��Ŀǰ��value,���л���һ��value���бȽϣ�һֱ��numΪ0������
    int value[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
    char* symbol[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
    char* ret = (char*)malloc(sizeof(char) * 16);
    ret[0] = '\0';

    int i = 0;
    for (i = 0; i < 13; i++)
    {
        while (num >= value[i])
        {
            num -= value[i];
            strcpy(ret + strlen(ret), symbol[i]);
        }
        if (num == 0)
            break;
    }
    return ret;
}