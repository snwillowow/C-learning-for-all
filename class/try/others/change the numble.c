#include <stdio.h>

int main()
{
    int a,b,c;
    printf("please write a number\n");
    scanf("%d",&a);
    printf("please write another number\n");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("%d,%d",a,b);
    return 0;
}