#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], temp[100]; 

    printf("please write first string:\n");
    scanf("%s", a); 

    printf("please write another string:\n");
    scanf("%s", b);

    strcpy(temp, a); 
    strcpy(a, b); 
    strcpy(b, temp); 

    printf("After swapping: %s, %s\n", a, b);
    return 0;
}
