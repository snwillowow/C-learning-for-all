#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    char temp;
    int i,len;
    char *p;

    p=a;

    scanf("%s",a);
    len = strlen(a);
    
    for(i=0;i<len/2;i++){
        temp=*(p+i);*(p+i)=*(p+len-1-i);*(p+len-1-i)=temp;
    }
    
    printf("%s",a);
    
    return 0;
}