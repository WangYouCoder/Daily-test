#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int lengthOfLongestSubstring(char* s) {
    int i = 0, j = i + 1;
    int len = strlen(s);
    int max = 0;
    while (i < len)
    {
        int count = 1;
        while (j < len)
        {
            int k = i;
            while (k < j)
            {
                if (s[k] != s[j])
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
            if (k == j)
            {
                j++;
                count++;
            }
            else
            {
                break;
            }
        }
        i++;
        j = i + 1;
        if (count > max)
        {
            max = count;
        }
    }
    return max;
}
int main()
{
	char* a = "abcabcbb";
    int len = lengthOfLongestSubstring(a);
	//int len = strlen(a);
	printf("%d", len);
	return 0;
}