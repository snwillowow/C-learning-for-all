#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[10][10] = {0};

    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {
        // 上边：从左到右
        for (int j = left; j <= right; j++)
            a[top][j] = num++;
        top++;

        // 右边：从上到下
        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        // 下边：从右到左
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                a[bottom][j] = num++;
            bottom--;
        }

        // 左边：从下到上
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }

    // 打印
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 10)
                printf("  %d", a[i][j]);
            else
                printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}