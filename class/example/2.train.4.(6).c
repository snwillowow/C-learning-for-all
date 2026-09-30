//将100-200之间的素数输出

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,n;
    for(a=101;a<=200;a+=2)
    {for(b=2,n=2;n<=(int)sqrt(a);n++)
        {if(a%n==0)
            {b=1;
            break;}}
        if(b!=1)
            {c+=1;
            printf("%d ",a);
            if(c%10==0)printf("\n");}
    }
    return 0;
}