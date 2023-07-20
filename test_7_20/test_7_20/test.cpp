#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Date
{
public:
	//explicit Date(int year)       //拒绝了隐式类型转化
	Date(int year)
		:_year(year)
	{
		cout << "Date(int year)" << endl;
	}
	Date(const Date& d)
	{
		cout << "Date(const Date& d)" << endl << endl;
		_year = d._year;
	}
	void Print()
	{
		cout << _year << endl;
	}
private:
	int _year;
};

int main()
{
	Date d(2023);
	d.Print();

	Date d1 = 2023;

	const Date& d2 = 2023;
	d1.Print();

	return 0;
}