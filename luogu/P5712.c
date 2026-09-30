#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("Today, I ate %d apple%s.",x,(x==0||x==1)?"":"s");
    return 0;
}