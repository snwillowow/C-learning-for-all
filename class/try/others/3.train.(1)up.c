#include <stdio.h>
int main()
{
    double p,r;
    int n;
    r = 0.07;
    p = 1.07;
    scanf ("%d",&n);
    while (n>1){
        n-=1;
        p = p*(1+r);
    }
    printf("%f",p);
    return 0;
}