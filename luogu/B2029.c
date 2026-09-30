#include <stdio.h>
int main(){
    int h,r;
    scanf("%d %d",&h,&r);

    //浮点数转整数处理
    float v=h*314*r*r;
    int n=(20000*100+v-1)/v;
    printf("%d",n);
    return 0;
}