#include"Date.h"

void TestDate1()
{
	Date d1(2023, 7, 18);
	Date d2(d1);

	Date d3(2023, 8, 18);

	cout << (d1 == d3) << endl;
	cout << (d1 <= d3) << endl;
}

void TestDate2()
{
	Date d1(2023, 7, 18);

	d1 += 4;
	d1.Print();

	d1 += 40;
	d1.Print();

	d1 += 400;
	d1.Print();

	d1 += 4000;
	d1.Print();
}

void TestDate3()
{
	Date d1(2023, 7, 18);

	Date ret1 = d1++;
	ret1.Print();

	Date ret2 = ++d1;
	ret2.Print();

	d1 -= 4;
	d1.Print();

	d1 -= 40;
	d1.Print();

	d1 -= 400;
	d1.Print();

	d1 -= 4000;
	d1.Print();
}

void TestDate4()
{
	Date d1(2023, 7, 18);
	Date d2(2023, 6, 18);
	cout << d1 - d2 << endl;
	cout << d2 - d1 << endl;
}
int main()
{
	//TestDate1();
	//TestDate2();
	//TestDate3();
	TestDate4();
	return 0;
}