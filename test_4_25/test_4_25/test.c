#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
 char * longestPalindrome(char * s){
     int len = strlen(s);
     int max = 0;
     int i = 0;
     int ret = 0;
     int count = 0;
     int start = 0;
     //��������

         for(i = 0; i<len;i++)
         {
             int left = i - 1,right = i + 1;
             // while(left>=0 && right <= len)
             // {
             //     if(s[left] == s[right])
             //     {
             //         left--;
             //         right++;
             //     }
             //     else
             //     {
             //         break;
             //     }
             // }
             while(left>=0 && right < len && s[left] == s[right])
             {  
                 left--;
                 right++;     
             }
             if(right - left - 1 > max)
             {
                 max = right-left -1;
                 start = left + 1;
             }
         }


     //����ż��

         for(i = 0; i < len;i++)
         {
             count = 0;
             int left = i,right = i + 1;
             while(left>=0 && right < len && s[left] == s[right])
             {  
                 left--;
                 right++;     
             }
             if(right - left - 1 > max)
             {
                 max = right-left -1;
                 start = left + 1;
             }
         }
         s[start + max] = '\0';

     return s + start;
 }


//  ����������е�ԭ������:��ͳ�ƻ����ַ�������ʱ������⡣�����������¼�´�ʱ��i����ͨ��count(�ƶ��˴���),
// ���õ������ַ�������ʼλ�ú���ֹλ��,��������ڣ�����ַ���Ϊ"cbbd"ʱ,����ͳ�Ƶ��ƶ��Ĵ���,������ѭ����,
// ��left����� == right,Ҳ����ζ�űض����ƶ�һ�Σ�Ҳ����count���1��ͬʱmax�ͻᷢ���ı䡣Ȼ����������ߣ�����ż��ѭ����
// ����"cbbd"��˵��һ��ֻ���ƶ�һ�Σ�����maxû�з����ı䣬if(max < count)�Ͳ����ȥ���ɴ˴�ʱret��¼�ľ���"c"��λ�ã�
// Ȼ���ٽ�"c"���λ�ø�Ϊ'\0'���������'c'
// 
// char* longestPalindrome(char* s) {
//     int len = strlen(s);
//     int max = 0;
//     int i = 0;
//     int ret = 0;
//     int count = 0;
//     int start = 0;

//     //��������

//         for (i = 0; i < len; i++)
//         {
//             count = 0;
//             int left = i, right = i;
//             while (left >= 0 && right < len)
//             {
//                 if (s[left] == s[right])
//                 {
//                     left--;
//                     right++;
//                     count = count + 1;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             if (max < count)
//             {
//                 max = count;
//                 ret = i;
//                 start = left + 1;
//             }
//         }


//     //����ż��

//         for (i = 0; i < len; i++)
//         {
//             count = 0;
//             int left = i, right = i + 1;
//             while (left >= 0 && right < len)
//             {
//                 if (s[left] == s[right])
//                 {
//                     left--;
//                     right++;
//                     count = count + 1;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             if (max < count)
//             {
//                 max = count;
//                 ret = i + 1;
//                 start = left + 1;
//             }
//         }
//         s[ret + max] = '\0';
//     return s + start;
// }


//��������:�����Ƿ�������Ϊmaxû�з����ı�����µĽ�������������ڸı�һ��max,������ǲ��У�ԭ���������max,count������Ϊ0��
//��ô���൱�����¼����ˣ���ô����ļ��������Ĵ��뻹��ʲô�����أ�����Ҳ�ǲ��еģ���������Ľⷨ���������ڣ����û����ַ����ĳ��Ƚ��бȽϵģ�
//�������ǵ�����˫������˫���������ļ��㲻��Ӱ��ż��������"abbc",�����������㷨�����յĽ��ֻ����һ���ַ���
//��Ϊ������һ��Ϊ���ģ�������Ƚϵģ������Ǵ�1�ӵ�3������ż����������Ϊ���ģ����ȴ�0һ�¼ӵ�2�������ǲ����غϵģ���˿��Ժܺõ����ֿ�����
//char* longestPalindrome(char* s) {
//    int len = strlen(s);
//    int max = 0;
//    int i = 0;
//    int ret = 0;
//    int count = 0;
//    int start = 0;
//
//    //��������
//
//    for (i = 0; i < len; i++)
//    {
//        count = 0;
//        int left = i, right = i;
//        while (left >= 0 && right < len)
//        {
//            if (s[left] == s[right])
//            {
//                left--;
//                right++;
//                count = count + 1;
//            }
//            else
//            {
//                break;
//            }
//        }
//        if (max < count)
//        {
//            max = count;
//            ret = i;
//            start = left + 1;
//        }
//    }
//
//
//    //����ż��
//
//    for (i = 0; i < len; i++)
//    {
//        max = 0;
//        count = 0;
//        int left = i, right = i + 1;
//        while (left >= 0 && right < len)
//        {
//            if (s[left] == s[right])
//            {
//                left--;
//                right++;
//                count = count + 1;
//            }
//            else
//            {
//                break;
//            }
//        }
//        if (max < count)
//        {
//            max = count;
//            ret = i + 1;
//            start = left + 1;
//        }
//    }
//    s[ret + max] = '\0';
//    return s + start;
//}
int main()
{
	char *s = "abb";
    char* ret = longestPalindrome(s);
    printf("%s", ret);
	return 0;
}