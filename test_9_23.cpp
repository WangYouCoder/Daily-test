#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	int count[256] = { 0 };
	for (size_t i = 0; i < s2.size(); i++)
	{
		count[s2[i]]++;
	}

	string ret;
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (count[s1[i]] == 0)
		{
			ret += s1[i];
		}
	}

	cout << ret << endl;

	return 0;
}