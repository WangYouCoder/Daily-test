#define _CRT_SECURE_NO_WARNINGS 1

//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
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