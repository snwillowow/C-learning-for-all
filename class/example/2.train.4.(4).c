//求1+2+3+……+100

#include <stdio.h>
int main()
{
    int a=1,b=2;
    while(b<=100){
        a=a+b;
        b+=1;
    }
    printf("%d",a);
    return 0;
}