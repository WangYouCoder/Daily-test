#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int total = 0;
	cin >> total;
	int* p = new int[total * 3];
	for (int i = 0; i < total * 3; i++)
	{
		cin >> p[i];
	}


	vector<int> v;
	
	for (int i = 0; i < total * 3; i++)
	{
		v.push_back(p[i]);
	}

	sort(v.begin(), v.end());

	int sum = 0;
	for (int i = 0; i < total; i++)
	{
		sum += v[(total * 3 - 1 - 1) - i * 2];
	}

	cout << sum << endl;
	return 0;
}