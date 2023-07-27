#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

template<class T>

void Swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

void test()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	cout << a << " " << b << endl;
}

void String_test()
{
	string s1("hello world");
	string s2(s1);
	string s3(s1, 5, 7);
	cout << s2 << endl;
	cout << s3 << endl;

	string s4(s1, 2);
	cout << s4 << endl;

	string s5(100, 'L');
	cout << s5 << endl;
}

void test_String()
{
	string s1("hello world");
	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;


}

void StringPrint(const string& str)
{
	string::const_reverse_iterator it = str.rbegin();
	while (it != str.rend())
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_auto()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto e : a)
	{
		cout << e << " ";
	}
}

void test_push()
{
	string s("hello");
	s.push_back('-');
	s.push_back('-');
	s.append("world");
	cout << s << endl;

	string str("I love You");
	s += ' ';
	s += str;
	s += "!!!";
	cout << s << endl;
}

int main()
{
	//test();

	//String_test();

	//test_String();

	//test_auto();

	test_push();


	return 0;
}
