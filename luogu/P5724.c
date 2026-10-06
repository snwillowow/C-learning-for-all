#include <stdio.h>

int Max(int a, int max)
{
    return max > a ? max : a;
}

int Min(int a, int min)
{
    return min < a ? min : a;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int temp;
    scanf("%d", &temp);
    int max = temp, min = temp;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &temp);
        max = Max(max, temp);
        min = Min(min, temp);
    }

    printf("%d", (max - min));

    return 0;
}