#include <stdio.h>
int main(){
    int h1,m1,h2,m2;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    int m_temp=m2-m1+(h2-h1)*60;
    int h=m_temp/60;
    int m=m_temp%60;
    printf("%d %d",h,m);
    return 0;
}