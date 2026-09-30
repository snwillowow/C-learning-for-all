//用泰勒展开计算Π/4=1-1/3+1/5-1/7+……

#include <stdio.h>

int main()
{
     double a=1.0,b,c;
     b=2.0;
     c=1.0;
     for(;(2*b+1)<=1e8;b++)    //绝对值可以用fabs()需要引入数学库
     {
          c=-c;
          a=a+c/(2*b-1);
     }
     printf("Π/4=%lf",a);
     return 0;
}