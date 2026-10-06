#include <stdio.h>

// 打印函数
void print(int i)
{
    if (i <= 9)
        printf("0%d", i);
    else
        printf("%d", i);
}

int main()
{
    int n;
    scanf("%d", &n);

    // 打印矩形
    int i;
    for (i = 1; i <= n * n; i++)
    {
        print(i);
        if (i % n == 0)
            printf("\n");
    }

    printf("\n");

    // 打印三角形
    int row;
    int col;
    int num = 1;
    for (row = 1; row <= n; row++)
    {
        for (int s = 0; s < (n - row); s++)
            printf("  ");
        for (col = 1; col <= row; col++)
        {
            print(num);
            num++;
        }
        printf("\n");
    }

    return 0;
}