//输入3个数a,b,c,要求从大到小的顺序输入
#include <stdio.h>
int main()
{
    float a,b,c,t;
    scanf("%f %f %f",&a,&b,&c);
    if(a>b){t=a;
    a=b;
    b=t;}
    if(a>c){t=a;
    a=c;
    c=t;}
    if(b>c){t=c;
    b=c;
    c=t;}
    printf("%f %f %f",a,b,c);
    return 0;
}