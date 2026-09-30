//输入两个正整数m和n,求其最大公约数和最小公倍数

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,n,i;

    printf("请输入两个正整数：");
    scanf("%d %d",&a,&b);

    for(n=1;n<=a||n<=b;n++)if(a%n==0&&b%n==0)c=n;
    printf("%d,%d的最大公约数为%d\n",a,b,c);

    for(n=a>b?a:b;n<=a*b;n++)
    if(n%a==0&&n%b==0){
        printf("%d,%d的最小公因数%d",a,b,n);
        break;
    }

    return 0;
    
}