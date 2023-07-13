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

	//double& dd = i;  //这样不行的原因是：当i给d时，实际上是创建了一个double类型的i  的临时变量，它具有常性，也就是const修饰的效果
					   //对于这里的引用来说，i实际上是带有const的，所以取别名时要加const,防止权限的缩小

	const double& dd = i;

	return 0;
}