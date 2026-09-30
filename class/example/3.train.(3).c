//购房从银行贷了一笔款d，准备每月还款额为p，月利率为r，计算几个月可以还清

#include <stdio.h>
#include <math.h>
int main()
{
    double d,p,r,a,b,m;
    d = 300000.0,p=6000.0,r=0.01;
    a = log(p/(p-d*r));
    b = log(1+r);
    m = a/b;
    printf("%5.1f",m);
    return 0;
}