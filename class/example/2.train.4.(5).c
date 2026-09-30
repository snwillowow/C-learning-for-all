//判断一个数n能否同时被3和5整除

#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0){
        if(a%5==0)printf ("able");
        else printf("unable");
    }
    else printf("unable");
    
    return 0;
}