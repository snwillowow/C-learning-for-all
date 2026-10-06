#include <stdio.h>

int fut(int n)
{
    return (n == 1) ? 1 : n + fut(n - 1);
}
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    if (n < 1 || n > 100)
        return 0;

    printf("%d", fut(n));

    return 0;
}