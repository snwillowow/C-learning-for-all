#include <stdio.h>
#define MAX 1100
#define class 3
#define single_score 5
int main()
{
    int N;
    if (scanf("%d", &N) != 1 || N < 2 || N > 1000)
        return 0;

    int a[MAX][class] = {0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < class; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    int count = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int k;
            sum = 0;
            int b[10] = {0};
            for (k = 0; k < class; k++)
            {
                b[k] = a[i][k] - a[j][k];
                if (b[k] > single_score || b[k] < -single_score)
                    break;
                sum += b[k];
            }
            if (k != class)
                continue;
            if (sum <= 10 && sum >= -10)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}