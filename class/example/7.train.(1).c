//写两个函数，分别求两个整数的最大公约数和最小公倍数

#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    int gcd(int x,int y);
    int lcm(int x,int y,int);
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);

    printf("这两个数的最大公约数为%d,最小公倍数为%d",gcd(a,b),lcm(a,b,gcd(a,b)));

    return 0;
}

//最大公约数
int gcd(int x,int y){
    int i,j;
    for(i=1;i<=x||i<=y;i++)
        if(x%i==0&&y%i==0)j=i;
    return (j);
}

//最小公倍数
int lcm(int x,int y,int z){
    return (x*y/z);
}