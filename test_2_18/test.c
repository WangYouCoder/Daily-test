#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
//输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)
//(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
//输出描述：
//对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）。
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    h = h + k / 60;
//    if (h >= 24)
//    {
//        h = h % 24;
//    }
//    m = m + k % 60;
//    if (m >= 60)
//    {
//        m %= 60;
//        h++;
//    }
//    printf("%02d:%02d", h, m);    //导0操作
//
//    return 0;
//}

//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0;
//    int t = 0;    //表示前面的人要做几趟电梯
//    t = n / 12;   // * 4表示要多长时间
//    m = t * 4 + 2;
//    printf("%d", m);
//    return 0;
//}
//
// 每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
//输出描述：
//对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和
// 
//int main()
//{
//    unsigned long long a, b, c;
//    unsigned long long ca, cb;
//    scanf("%lld %lld", &a, &b);
//    ca = a;
//    cb = b;
//    if (a < b)   //把较大数放到前面
//    {
//        c = a;
//        a = b;
//        b = c;
//    }
//    //求最大公倍数
//    // int i = 0;
//    // unsigned long long ret = 0;
//    // for(i = 1; (i*a)%b != 0; i++)
//    // {
//    //     ;
//    // }
//    // ret = i * a;
//    //求最大公约数，辗转相除法
//    while (b != 0)
//    {
//        c = a % b;
//        a = b;
//        b = c;
//    }
//    //求最大公倍数
//    unsigned long long ret = (ca / a) * (cb / a) * a;
//    unsigned long long num = a + ret;
//    printf("%lld", num);
//    return 0;
//}

//                           如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0;         //用来保存改变之后的数据
//    int num = 0;       //用来进行是存放1还是0
//    int k = 1;         //用来让每一位的1和0到达其相应的位置
//    while (n)
//    {
//        int tmp = n % 10;  //用来保存末位数
//        if (tmp % 2 == 1)    //进行判断
//        {
//            num = 1;
//        }
//        else {
//            num = 0;
//        }
//        m = num * k + m;  //是奇数就就让1乘长它本应该的位次再加上原来的值
//        k = k * 10;       //帮助每一个数加到它相应的位置
//        n = n / 10;       //然后进行下一个数
//    }                             //就比如是一个数12，其第一位是2，应改为数字0，所以
//    printf("%d", m);        //按照上面的讲解就是0乘上它本来的位次个位。也就是1，
//    return 0;                     //再加上它原来的数0，就完成了
//}                                 //然后到1，是奇数应改为1，就是1乘上它的本来的位次十位，
//                                  //也就是1 * 10再加上原来的数，1*10+0 = 10，后面也是以此类推


//int main()
//{
//    float a, b, c, d;
//    scanf("%f %f %f %f", &a, &b, &c, &d);
//    float num = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//    printf("%.1f", num);
//    return 0;
//}