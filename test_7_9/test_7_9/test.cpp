#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	const int& b = a;
	a = 10;
	cout << a <<" "<< b << endl;


	int i = 1;
	double d = i;

	//double& dd = i;  //�������е�ԭ���ǣ���i��dʱ��ʵ�����Ǵ�����һ��double���͵�i  ����ʱ�����������г��ԣ�Ҳ����const���ε�Ч��
					   //���������������˵��iʵ�����Ǵ���const�ģ�����ȡ����ʱҪ��const,��ֹȨ�޵���С

	const double& dd = i;

	return 0;
}