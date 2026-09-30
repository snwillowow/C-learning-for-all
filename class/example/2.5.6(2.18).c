#include <stdio.h>
int main()
{
    int i,t;
    i = 1;
    t = 2;
    while (t<=5)
    {
        i = i*t;
        t += 1;
    }
    printf("%d",i);
    return 0;
}