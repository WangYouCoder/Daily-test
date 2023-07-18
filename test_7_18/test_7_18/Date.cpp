#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::operator<(const Date& d)
{
	return !(*this == d) && !(*this > d);
}

bool Date::operator>=(const Date& d)
{
	return !(*this < d);
}

bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}

Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month); 
		_month++;
		if (_month == 13)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}

Date Date::operator+(int day)
{
	//Date ret(*this); //拷贝构造
	Date ret = *this;
	ret += day;
	return ret;
}

void Date::Print()
{
	cout <<  _year << "/" << _month <<  "/" << _day << endl;
}

//前置＋＋
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//后置＋＋
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}

Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		_month--;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator-(int day)
{
	Date ret = *this;
	ret -= day;
	 
	return ret;
}


Date& Date:: operator--()
{
	return *this -= 1;
}

Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}

int Date::operator-(const Date& d)
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}
	int n = 0;
	while (min != max)
	{
		min++;
		n++;
	}
	return n * flag;
}