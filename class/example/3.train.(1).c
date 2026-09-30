//计算10年后百分比增长率

#include <stdio.h>
int main()
{
    double r,n,p;
    r = 0.07;
    p = (1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r);
    printf ("%f",p);
    return 0;
}