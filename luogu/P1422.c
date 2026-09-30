#include <stdio.h>
#define p1 0.4463
#define p2 0.4663
#define p3 0.5663
int main(){
    int n;
    double cost;
    scanf("%d",&n);
    if(n<=150)cost= p1*n;
    else if(n>150&&n<=400)cost=150*p1+(n-150)*p2;
    else cost=150*p1+(400-150)*p2+(n-400)*p3;
    printf("%.1lf",cost);
    return 0;
}