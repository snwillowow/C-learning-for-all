//分段函数

#include <stdio.h>
int main()
{
     double x,y;
     scanf("%lf",&x);
     if        (x<1.0)     y=x;
     else if   (x<10.0)    y=2*x-1;
     else                  y=3*x-11;
     printf("%.2lf",y);
     return 0;
}