#include<iostream>
using namespace std;

class Time
{
public:
	Time(int hour)
	{
		_hour = hour;
	}
private:
	int _hour;
};

class Date
{
public:
	Date(int year, int hour)
		:_t(hour)
	{
		_year = year;
		Time t(hour);
		_t = t;
	}

private:
	int _year;
	Time _t;
};

int main()
{
	//Date d(2023,1);

	int i = 10;
	const double& d = i;
	return 0;
}