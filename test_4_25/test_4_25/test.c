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
     //处理奇数

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


     //处理偶数

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


//  这个方法不行的原因在于:在统计回文字符个数的时候出问题。如果是奇数记录下此时的i，再通过count(移动了次数),
// 来得到回文字符串的起始位置和终止位置,问题就在于，如果字符串为"cbbd"时,由于统计的移动的次数,在奇数循环中,
// 由left起初都 == right,也就意味着必定会移动一次，也就是count会加1，同时max就会发生改变。然后继续往下走，进入偶数循环，
// 对于"cbbd"来说，一样只会移动一次，由于max没有发生改变，if(max < count)就不会进去，由此此时ret记录的就是"c"的位置，
// 然后再将"c"后的位置改为'\0'，最终输出'c'
// 
// char* longestPalindrome(char* s) {
//     int len = strlen(s);
//     int max = 0;
//     int i = 0;
//     int ret = 0;
//     int count = 0;
//     int start = 0;

//     //处理奇数

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


//     //处理偶数

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


//紧跟上述:我们是发现是因为max没有发生改变而导致的结果，那我们现在改变一下max,结果还是不行，原因在于如果max,count都重置为0，
//那么就相当于重新计算了，那么上面的计算奇数的代码还有什么意义呢？所以也是不行的，而最上面的解法，就妙在于，是用回文字符串的长度进行比较的，
//单数就是单数，双数就是双数，奇数的计算不会影响偶数，比如"abbc",按照奇数的算法，最终的结果只会有一个字符，
//因为它是以一个为中心，两侧相比较的，长度是从1加到3。按照偶数，以两个为中心，长度从0一下加到2，长度是不回重合的，因此可以很好的区分开它们
//char* longestPalindrome(char* s) {
//    int len = strlen(s);
//    int max = 0;
//    int i = 0;
//    int ret = 0;
//    int count = 0;
//    int start = 0;
//
//    //处理奇数
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
//    //处理偶数
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