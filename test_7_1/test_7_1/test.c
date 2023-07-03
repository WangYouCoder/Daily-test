#define _CRT_SECURE_NO_WARNINGS 1

void TopK(int k)
{
	const char* file = "data.txt";
	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}

	int* kminheap = (int*)malloc(sizeof(int) * k);
	if (kminheap == NULL)
	{
		perror("malloc error");
		return;
	}

	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &kminheap[i]);
	}

	//Ω®–°∂—
	for (int i = (k-1-1)/2; i >= 0; i--)
	{
		AdjustDown(kminheap, k, i);
	}

	int val = 0;
	while (!feof(fout))
	{
		fscnaf(fout, "%d", &val);
		if (val > kminheap[0])
		{
			kminheap[0] = val;
			AdjustDown(kminheap, k, 0);
		}
	}

	//¥Ú”°
	for (int i = 0; i < k; i++)
	{
		printf("%d ", kminheap[i]);
	}

}