//输入三位数的所有水仙数

#include <stdio.h>

int main()
{
     int a,b,c,d;
     for(a=100;a<1000;a++)
     {b=a/100;
     c=(a-b*100)/10;
     d=a-b*100-c*10;
     if(a==b*b*b+c*c*c+d*d*d)printf("%d ",a);}
     return 0;
}