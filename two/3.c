#include <stdio.h>

long long count_selections(int max_value, int left, int rest)
{
    int n = 0;
    if (left == 0)
    {
        if (rest == 0)
        {
            return ++n;
        }
    }
    else
    {
        int k = (max_value < rest) ? max_value : rest;

        for (int i = 1; i <= k; i++)
        {
            count_selections(k, --left, rest - i);
        }
    }
}

int main(void)
{
    int n, k, target;
    if (scanf("%d %d %d", &n, &k, &target) != 3 || k > n)
    {
        return 1;
    }

    long long result = 0;
    // TODO：调用 count_selections，并将返回值赋给 result
    result = count_selections(n, k, target);
    printf("%lld\n", result);
    return 0;
}