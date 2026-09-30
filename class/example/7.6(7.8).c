//Hanoi塔问题：有3个塔A、B、C，现在需要将A上的个盘子借助B全部移到C上，要求小盘子必须在大盘子之上。

#include <stdio.h>
#include <math.h>
int main()
{
    int A,B,C;
    int n,m;
    void f(int n,char one,char two,char three);

    printf("请输入您需要几个盘子的操作过程:(个)");
    scanf("%d",&n);
    printf("输出操作过程:\n");
    f(n,'A','B','C');
    m=pow(2,n)-1;
    printf("需要%d步",m);
    return 0;
}

void f(int n,char one,char two,char three)
{
void move(int x,int y);
if(n==1)move(one,three);
    else if(n>=6){printf("操作次数过多,只计算操作步骤");}
    else {
        f(n-1,one,three,two);
        move(one,three);
        f(n-1,two,one,three);
    }
}

void move(int x,int y)
{
    printf("%c-->%c\n",x,y);
}