#include <iostream>
using namespace std;
#define NUM 51
int p[NUM];   // p数组（从1开始）中存放每个矩阵的列值，但p[0]记录第一个矩阵的行值
int m[NUM][NUM]; // m数组存放在各不同子链长下，最小的矩阵连乘机
int s[NUM][NUM]; // s数组存放在不同子链长下，断开的位置(在该断开的位置取得当前链长连乘积的最小值)

void MatrixChain(int n) {
    // m数组，另主对角线为零，也就是单个矩阵时，连乘积为0
    for (int i = 1; i <= n; ++i) {
        m[i][i] = 0;
    }
    // r表示矩阵链的长度，即：所求子问题中 矩阵的个数
    // 再动态规划算法中，我们先计算问题的解，再分割子问题时，就从头开始，第一次r的循环让r=2，就是控制矩阵的个数为2
    // 然后让r=3，即子问题中矩阵的个数为3 直到矩阵个数为n
    for (int r = 2; r <= n; ++r) {
        for (int i = 1; i <= n - r + 1; ++i) {
            int j = i + r - 1;
            // 计算初值，在i出断开
            // r大于等于3之后，会先计算在i断开的情况，因为m[i][i]等于零，下面的式子中可不写
            // 使用s[i][j]记录断开的位置
            // 计算完在i出断开的后，进入k+1的循环，即断开位置开始相后移动
            m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];
            s[i][j] = i;
            // r大于等于3之后，计算完再i出断开的情况后，让k=i+1，即断开处开始向后移动，直到移动到最后一个矩阵前停止
            // 每移动到一个新的断开位置，都要计算其连乘积，并与已经存入表内的值多对比，取较小者存入表内
            for (int k = i + 1; k < j; ++k) {
                int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (t < m[i][j]) {
                    m[i][j] = t;
                    s[i][j] = k;
                }
            }
        }
    }
}

// 递归输出分割好的矩阵序列
void TraceBack(int i, int j) {
    if (i == j) {
        cout << "A" << i;
    }
    else {
        cout << "(";
        TraceBack(i, s[i][j]);
        TraceBack(s[i][j] + 1, j);
        cout << ")";
    }
}

int main() {
    int n;
    cout << "请输入矩阵的个数：";
    cin >> n;
    cout << "请输入各矩阵的行列数，用空格隔开：";
    // 构造P数组
    for (int i = 0; i <= n; ++i) {
        cin >> p[i];
    }
    MatrixChain(n);
    cout << "最小连乘积为：";
    cout << m[1][n] << endl;
    cout << "最优解为：";
    TraceBack(1, n);
    return 0;
}