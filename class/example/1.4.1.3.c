//���⣺�����������еĽϴ���

#include <stdio.h>

int main()
{
    int max(int x,int y);
    int a,b,c;
    
    printf("������������(��������Ӣ��ģʽ):");
    scanf("%d,%d",&a,&b);
    
    c = max(a,b);
    
    printf("max = %d\n",c);                  //&��ָ�����ĵ�ַ
    
    return 0;
}

//���������нϴ����ĺ���
int max(int x,int y)
{
    int z = y;
    
    if(x>y)z=x;
    
    return(z);
}