//P1423
#include <stdio.h>
int main(){
    const double p=0.98;
    int n=0;
    double s;
    double len=0.0;
    scanf("%lf",&s);
    double forwards=2;
     while (len <= s) {
        n++;
        len += forwards;
        forwards *= p; 
    }
    printf("%d",n);
    return 0;
}