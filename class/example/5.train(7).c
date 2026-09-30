//求1+……+100+1²+……+50²+1+1/2+……+1/10=?

#include <stdio.h>
#include <math.h>                                      //sqrt平方根，pow幂次

int main()
{
     double a,b,c,d;
     
     for(b=0,a=1;a<=100;a++)b+=a;
     for(c=0,a=1;a<=50;a++)c+=a*a;
     for(d=0,a=1;a<=10;a++)d+=1/a;
     b=b+c+d;
     printf("%lf",b);
     return 0;
}