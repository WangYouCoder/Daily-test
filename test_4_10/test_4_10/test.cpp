#include <iostream>
using namespace std;

int g[100][100];//������̰��ŵ�����
//���̰��ź���
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
//���ش��ڻ����num����С2�ļ��η�
int istwopower(int num)
{
    int s = 1;
    while (s < num)
        s = s * 2;
    return s;
}
int main()
{
    int num, i, j = 2;//numΪ������
    int f;//��Ŵ��ڻ����num����С2�ļ��η�
    cout << "input the number of teams:";
    cin >> num;
    for (i = 2; i < 8; i++)//�ж��Ƿ�Ϊ2����������
    {
        j = j * 2;
        if (j == num) break;
    }
    if (i >= 8)
    {
        printf("����ѡ����������Ϊ2���������ݣ��Ҳ�����64��\n");
    }
    f = istwopower(num);
    divide(f);
    //���ֿ�������Ϊ��
    if (f > num)
        for (i = 0; i < num; i++)
            for (j = 0; j < f; j++)
                if (g[i][j] > num)
                    g[i][j] = 0;
    //������
    cout << "the schedule:" << endl;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < f; j++)
            cout << g[i][j] << "  ";
        cout << endl;
    }
    return 0;
}