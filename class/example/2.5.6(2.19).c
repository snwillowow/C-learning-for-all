//计算1-1/2+1/3-1/4+……+1/99-1/100

#include <stdio.h>
int main()
{
    int a = 1;
    double b = 2.0,c = 1.0,d;
    while(b<=100)
    {
        a = -a;
        d = a/b;
        c = c+d;
        b += 1;
    }
    printf("%f",c);
    return 0;
}