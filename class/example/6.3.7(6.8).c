//计算一个句子中有几个单词

#include <stdio.h>
#include <string.h>                                    

int main()
{
     char c,str[100];
     int i,word=0,num=0;

     gets(str);
     for(i=0;(c=str[i])!='\0';i++)                     //找到字符串结束符
     {
          if(c==' ')word=0;
          else if(word==0){word=1;
               num++;}
     }
     printf("%d",num);
     return 0;
}