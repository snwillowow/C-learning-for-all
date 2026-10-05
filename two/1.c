// 冒泡循环：判断出现次数再判断大小

#include <stdio.h>

// 计算出现次数
int sum(int arr[], int length, int n)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == n)
            count++;
    }
    return count;
}

// 冒泡排序
void bubbleSortByFrequency(int arr[], int length)
{
    int i, j;
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] == arr[j + 1])
                continue;
            int sum1 = sum(arr, length, arr[j]);
            int sum2 = sum(arr, length, arr[j + 1]);
            if (sum1 < sum2 || (sum1 == sum2 && arr[j] > arr[j + 1]))
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[] = {4, 2, 4, 3, 2, 4, 5, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    bubbleSortByFrequency(arr, length);

    for (int i = 0; i < length; ++i)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}