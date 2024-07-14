#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
using namespace std;

// 插入排序
void Sort1(int* num /*数组*/, int n/*数组大小*/)
{
	int cur = 0;
	while (cur < n - 1)
	{
		int end = cur + 1;
		int val = num[end];
		while (end > 0)
		{
			if (val < num[end - 1])
			{
				num[end] = num[end - 1];
				end--;
			}
			else
			{
				break;
			}
		}
		num[end] = val;
		cur++;
	}
}

// 希尔排序
void Sort2(int* nums, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0; i < n - gap /*-gap保证end不会越界*/; i++)
		{
			int end = i + gap; // 待排序数据下标
			int val = nums[end];
			while (end >= gap)
			{
				if (val < nums[end - gap])
				{
					nums[end] = nums[end - gap];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			nums[end] = val;
		}
	}
}

 /*选择排序*/
void Sort3(int* nums, int n)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		int max_val = left, min_val = left;
		for(int i = left; i <= right; i++)
		{
			if (nums[i] > nums[max_val])
				max_val = i;
			if (nums[i] < nums[min_val])
				min_val = i;
		}
		swap(nums[left], nums[min_val]);
		if (max_val == left)
			max_val = min_val;
		swap(nums[max_val], nums[right]);

		left++;
		right--;
	}

}

// 堆排序

// 向下调整算法
void JudgeDown(int* nums, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && nums[child] < nums[child + 1])
			child += 1;
		if (nums[parent] < nums[child])
		{
			swap(nums[parent], nums[child]);
		}
		else
		{
			break;
		}
		parent = child;
		child = parent * 2 + 1;
	}
	
}
void heap(int* nums, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		JudgeDown(nums, n, i);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		swap(nums[0], nums[i]);
		JudgeDown(nums, i, 0);
	}
}

// 快排
int Partion1(int* nums, int left, int right)
{
	int key = left;

	while (left < right)
	{
		while (left < right && nums[right] >= nums[key])
		{
			right--;
		}

		while (left < right && nums[left] <= nums[key])
		{
			left++;
		}
		swap(nums[left], nums[right]);
	}
	swap(nums[key], nums[left]);
	return left;
}

void Sort_Quick(int* nums, int left, int right)
{
	if (left >= right) return;

	int key = Partion1(nums, left, right);
	Sort_Quick(nums, left, key - 1);
	Sort_Quick(nums, key + 1, right);
}

void QuickSortR(int* nums, int left, int right)
{
	stack<int> st;
	st.push(left);
	st.push(right);

	while (!st.empty())
	{
		int end = st.top();
		st.pop();
		int begin = st.top();
		st.pop();
		int key = Partion1(nums, begin, end);
		
		if (begin < key - 1)
		{
			st.push(left);
			st.push(key - 1);
		}
		
		if (key + 1 < end)
		{
			st.push(key + 1);
			st.push(end);
		}
	}
}
void _MergeSort(int* nums, int left, int right, int* tmp)
{
	if (left >= right) return;

	int mid = left + (right - left) / 2;
	_MergeSort(nums, left, mid, tmp);
	_MergeSort(nums, mid + 1, right, tmp);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;	
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (nums[begin1] < nums[begin2])
			tmp[i++] = nums[begin1++];
		else
			tmp[i++] = nums[begin2++];
	}
	while (begin1 <= end1)
	{
		tmp[i++] = nums[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = nums[begin2++];
	}

	for (int i = left; i <=  right; i++)
	{
		nums[i] = tmp[i];
	}
}

void MergeSort(int* nums, int n)
{
	int* tmp = new int[n];
	_MergeSort(nums, 0, n - 1, tmp);
	delete[] tmp;
}

void MergeSortR(int* nums, int n)
{
	int* tmp = new int[n];

	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i = i + 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			if (end2 >= n) end2 = n - 1;
			if (begin2 >= n)
			{
				begin2 = n;
				end2 = n - 1;
			}
			if (end1 >= n) end1 = n - 1;

			int k = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (nums[begin1] < nums[begin2])
					tmp[k++] = nums[begin1++];
				else
					tmp[k++] = nums[begin2++];
			}
			while (begin1 <= end1)
			{
				tmp[k++] = nums[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[k++] = nums[begin2++];
			}
		}

		for (int j = 0; j < n; j++)
		{
			nums[j] = tmp[j];
		}
		gap *= 2;
	}
	delete[] tmp;
}

void Print(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[] = { 8, 4, 6, 9, 2, 4, 1, 3, 5, 7 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "排序前: ";
	Print(a);
	//Sort1(a, sizeof(a) / sizeof(a[0]));
	//Sort2(a, sizeof(a) / sizeof(a[0]));
	//Sort3(a, sizeof(a) / sizeof(a[0]));
	//heap(a, sizeof(a) / sizeof(a[0]));
	//Sort_Quick(a, 0, n - 1);
	//QuickSortR(a, 0, n - 1);
	//MergeSort(a, n);
	MergeSortR(a, n);
	cout << "排序后: ";
	Print(a);
	return 0;
}