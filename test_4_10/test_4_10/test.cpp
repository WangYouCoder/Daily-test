#include <iostream>
using namespace std;

int g[100][100];//存放赛程安排的数组
//赛程安排函数
void divide(int n)
{
    int i, j;
    int temp = 2;
    g[0][0] = 1; g[0][1] = 2;
    g[1][0] = 2; g[1][1] = 1;
    while (temp != n)
    {
        //left lower
        for (i = temp; i < 2 * temp; i++)
            for (j = 0; j < temp; j++)
                g[i][j] = g[i - temp][j] + temp;
        //right lower
        for (i = temp; i < 2 * temp; i++)
            for (j = temp; j < 2 * temp; j++)
                g[i][j] = g[i - temp][j - temp];
        //upper right
        for (i = 0; i < temp; i++)
            for (j = temp; j < 2 * temp; j++)
                g[i][j] = g[i + temp][j - temp];
        temp = temp * 2;
    }
}
//返回大于或等于num的最小2的几次方
int istwopower(int num)
{
    int s = 1;
    while (s < num)
        s = s * 2;
    return s;
}
int main()
{
    int num, i, j = 2;//num为队伍数
    int f;//存放大于或等于num的最小2的几次方
    cout << "input the number of teams:";
    cin >> num;
    for (i = 2; i < 8; i++)//判断是否为2的整数次幂
    {
        j = j * 2;
        if (j == num) break;
    }
    if (i >= 8)
    {
        printf("参赛选手人数必须为2的整数次幂，且不超过64！\n");
    }
    f = istwopower(num);
    divide(f);
    //将轮空那天标记为零
    if (f > num)
        for (i = 0; i < num; i++)
            for (j = 0; j < f; j++)
                if (g[i][j] > num)
                    g[i][j] = 0;
    //输出结果
    cout << "the schedule:" << endl;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < f; j++)
            cout << g[i][j] << "  ";
        cout << endl;
    }
    return 0;
}