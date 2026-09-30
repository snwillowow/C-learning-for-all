#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",(n%100!=0&&n%4==0)||(n%400==0));
    return 0;
}