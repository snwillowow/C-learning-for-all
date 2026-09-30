//给定一个大写字母，输出其小写字母

#include <stdio.h>
int main()
{
    char a,b;
    a ='A';
    b = a+32;                              //大小写的ASCLL码差32
    printf("%c\n",b);
    printf("%d\n",b);
    return 0;
}