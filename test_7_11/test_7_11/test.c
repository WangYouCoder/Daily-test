#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void AdjustDown(int *a, int n,int parent)
{
	int child = parent * 2 + 1;

	while (child <= n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child++;
		}

		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

//ÉýÐò
void HeapSort(int* a, int n)
{
	//½¨¶Ñ
	int i = 0;
	for (i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		end--;
		AdjustDown(a, end, 0);
	}
}

int PartSort(int* a, int left, int right)
{
	int key = left;
	while (left < right)
	{

		while (left < right && a[right] >= a[key])
		{
			right--;
		}

		while (left<right && a[left] <= a[key])
		{
			left++;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[key], &a[left]);
	return left;
}

int PartSort2(int* a, int left, int right)
{
	int hole = left;
	while (left < right)
	{
		while (left<right && a[right] >= a[hole])
		{
			right--;
		}
		Swap(&a[right], &a[hole]);
		hole = right;

		while (left < right && a[left] <= a[hole])
		{
			left++;
		}
		Swap(&a[left], &a[hole]);
		hole = left;
	}
	return hole;
}

int PartSort3(int* a, int left, int right)
{
	int key = left;
	int cur = left + 1;
	int prev = left;
	
	while (cur <= right)
	{
		if (a[cur] < a[key])
		{
			Swap(&a[cur], &a[++prev]);
		}
		cur++;
	}
	Swap(&a[key], &a[prev]);
	return prev;
}

void QuickSort(int* a, int begin,int end)
{
	if (begin >= end)
		return;
	int key = PartSort3(a, begin, end);

	QuickSort(a, begin,key - 1);
	QuickSort(a,key + 1,end);
}

int main()
{
	int a[10] = { 5,3,7,9,4,6,1,8,2,0 };
	QuickSort(a, 0,9);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}