#include <stdio.h>
int main() 
{
    int h,r;
    scanf("%d %d",&h,&r);
    int s = 157*r*r*h;
    int n = (1000000+s-1)/s;
    printf("%d",n);
    return 0;
}