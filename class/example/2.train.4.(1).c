//交换a,b个瓶子，分别盛放两种液体，要求将他们互换

#include <stdio.h>
int main()
{
    int a=1,b=2,c;
    c = a;
    a = b;
    b = c;
    printf("%d,%d",a,b);
    return 0;
}