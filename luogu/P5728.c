#include <stdio.h>
#include <stdlib.h> // 为了 abs 函数

#define MAX 1005

int main()
{
    int N;
    scanf("%d", &N);

    int score[MAX][3];
    int total[MAX]; // 每个学生的总分

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
        total[i] = score[i][0] + score[i][1] + score[i][2];
    }

    int count = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // 检查单科差是否都不超过 5
            int ok = 1;
            for (int k = 0; k < 3; k++)
            {
                if (abs(score[i][k] - score[j][k]) > 5)
                {
                    ok = 0;
                    break;
                }
            }
            // 检查总分差是否不超过 10
            if (ok && abs(total[i] - total[j]) <= 10)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}