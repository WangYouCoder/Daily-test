#define _CRT_SECURE_NO_WARNINGS 1

char* intToRoman(int num) {

    //哈希表

    //为每一个罗马数字与之相匹配的整数建立索引，从大数开始遍历，num如果比目前最大的数大就减去它，每减一次都要在数组中添加所对应的罗马数字。如果小于目前的value,就切换下一个value进行比较，一直到num为0结束。
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