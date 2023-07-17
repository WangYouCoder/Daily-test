#include<iostream>
using namespace std;

class Time
{
public:
	/*Time(int hour = 1, int minute = 1, int second = 1)
	{
		_hour = hour;
		_minute = minute;
		_second = second;
	}*/

	Time()
	{
		cout << "Time():" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};

class Data
{
public:

//private:
	int _year = 1;
	int _month = 1;
	int _day = 1;
	
	Time _t;
};

typedef int DataType;
class Stack
{
public:
	Stack(size_t capacity = 3)
	{
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü!!!");
			return;
		}
		_capacity = capacity;
		_size = 0;
	}
	void Push(DataType data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}

private:
	DataType* _array;
	int _capacity;
	int _size;
};

class MyQueue
{
public:
	void push(int x){}
private:
	Stack _st1;
	Stack _st2;
};

constexpr int size()
{
	int a = 10;
	int b = 10;
	return a + b;
}

int main()
 {
	Data d1;
	MyQueue q;

	cout << d1._year << endl;

	//double dval = 3.14;
	//const int& r1 = dval;
	//cout << dval << " " << r1<<endl;


	/*const int i = 10, & r1 = 0;
	cout << i << " " << r1 << endl;*/

	/*int* pi;
	const int* pi1;
	int i = 0;
	pi = &i;
	pi1 = &i;
	cout << *pi << " " << *pi1 << endl;*/

	//constexpr int b = 10;
	//constexpr int a = size();
	//cout << a << " " << b << endl;

	//constexpr int i = 42;
	//const int j = 0;
	//constexpr const int* const p = &i;
	//constexpr int* const p1 = &j;

	constexpr int i = 42;
	const int* p = &i;

	constexpr int* p = nullptr;
	constexpr const int j = 0;
	//constexpr int* conspi = &j;
	return 0;
}