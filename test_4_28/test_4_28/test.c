#define _CRT_SECURE_NO_WARNINGS 1

//����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
//��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
int reverse(int n)
{
    long long num = 0;
    while (n)
    {
        int tmp = n % 10;
        num = num * 10 + tmp;
        n /= 10;
    }
    return num;
}
bool isPalindrome(int x) {
    if (x < 0)
    {
        return false;
    }

    int ret = reverse(x);
    if (ret == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}