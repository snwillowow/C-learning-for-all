#include <stdio.h>
int main()
{
     int a;
     scanf("%d",&a);
     if   (a%100!=0&&a%4==0||a%400==0)printf("%d,为闰年",a);
     else                             printf("%d,不是闰年",a);
     return 0;
}