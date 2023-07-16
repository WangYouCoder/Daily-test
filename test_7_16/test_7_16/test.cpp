#include<iostream>
using namespace std;
int main()
{
	/*int a = 10;
	int& aa = a;
	int& aaa = aa;
	cout << a << " " << aa << " " << aaa << endl;*/

	/*int i = 100, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum+=i;
	}
	cout << i << " " << sum << endl;*/

	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14;
	r2 = r1;
	i = r2;
	r1 = d;

	return 0;
}