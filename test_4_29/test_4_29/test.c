#define _CRT_SECURE_NO_WARNINGS 1

int maxArea(int* height, int heightSize) {
    // int i = 0;
    // int max = 0;
    // int v = 0;
    // for(i = 0; i<heightSize; i++)
    // {
    //     int j = 0;
    //     for(j = i + 1; j<heightSize; j++)
    //     {
    //         int tmp = height[i]>height[j]?height[j]:height[i];
    //         v = tmp * (j - i);
    //         if(max < v)
    //         {
    //             max = v;
    //         }
    //     }
    // }
    // return max;

    int front = 0;
    int tail = heightSize - 1;
    int v = 0;
    int max = 0;
    while (front < tail)
    {
        int tmp = height[front] > height[tail] ? height[tail] : height[front];
        v = (tail - front) * tmp;
        if (max < v)
        {
            max = v;
        }
        if (height[front] < height[tail])
        {
            front++;
        }
        else
        {
            tail--;
        }
    }
    return max;
}