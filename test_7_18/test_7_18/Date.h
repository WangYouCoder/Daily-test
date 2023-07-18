#pragma once
#include<iostream>
using namespace std;
class Date
{
public:
	//��ȡĳ�µ�����
	int GetMonthDay(int year, int month)
	{
		static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = days[month];
		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			day = 29;
		}
		return day;
	}

	//���캯��
	Date(int year = 2023, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//��������
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month; 
		_day = d._day;
	}

	// ���������
	bool operator==(const Date& d);
	bool operator!=(const Date& d);
	bool operator>(const Date& d);
	bool operator<(const Date& d);
	bool operator>=(const Date& d);
	bool operator<=(const Date& d);

	Date& operator+=(int day);
	Date operator+(int day);

	Date operator-(int day);
	Date& operator-=(int day);


	Date& operator++();
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	int operator-(const Date& d);

	void Print();

private:
	int _year;
	int _month;
	int _day;
};

