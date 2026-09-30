//比大小升格

#include <stdio.h> 
int main ()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    max = b;
    if(a>b)max = a;
    printf("%d",max);
    return 0;
}