//输入一个大写字母，自动转化为小写字母

#include <stdio.h>
int main()
{
    int a,b;
    a = getchar();
    b = a + 32;
    putchar(b);
    putchar('\n');
    return 0;
}