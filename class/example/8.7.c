#include <stdio.h>
int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9},i;
    int *p;
    for (i=0,p=a;i<10;i++)
    printf("%d ",*p++);
    return 0;
}