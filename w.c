#include <stdio.h>

int f(int n)
{
    return (n == 1 || n == 2) ? 1 : (f(n - 1) + f(n - 2));
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}