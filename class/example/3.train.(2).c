/*存款利息的计算。有1000元，想存5年，可按如下办法存：
（1）一次存5年期；
（2）先存2年期，到期后将本息再存3年；
（3）先存3年期，到期后将本息再存2年；
（4）存1年期，到期后再存1年期，连续存5年；
（5）存活期存款。活期利息每一季度结算一次。*/

#include <stdio.h>
int main ()
{
    int n=5,t=5,k;
    double r1 = 0.015,r2 = 0.021,r3 = 0.0275,r5 = 0.03,rh = 0.0035;         //利率
    double p1,p2,p3,p23,p5,p32,ph;                                             //算法得钱
    double money = 1000.0;                                                  //本金
    
    p5 = money*(1+5*r5);
    
    p2 = money*(1+2*r2);
    p23 = p2*(1+3*r3);
    
    p3 = money*(1+3*r3);
    p32 = p3*(1+r2*2);
    
    p1 = money*(1+r1);
    while (n>1)
    {
        p1 = p1*(1+r1);
        n-=1;
    }

    ph = money*(1+rh/4);
    k = 4*t;
    while (k>1)
    {
        ph = ph*(1+rh/4);
        k-=1;
    }

    printf("%f\n%f\n%f\n%f\n%f\n",p5,p23,p32,p1,ph);
    return 0;
}