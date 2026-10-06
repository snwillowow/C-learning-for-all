#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int i;
    double sum_do = 0;
    int len_do = 0;
    double sum_nodo = 0;
    int len_nodo = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sum_do += i;
            len_do++;
        }
        else
        {
            sum_nodo += i;
            len_nodo++;
        }
    }

    printf("%.1lf ", (double)sum_do / len_do);
    printf("%.1lf", (double)sum_nodo / len_nodo);

    return 0;
}