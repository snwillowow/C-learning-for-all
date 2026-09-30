#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
   
    int A=(x%2==0);
    int B=(x>4&&x<=12);
   
    int a=A&&B;
    int b=A||B;
    int c=A^B;     //等价于c=(A&&!B)||(!A&&B)
    int d=!A&&!B;
    
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}