#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    
    void f(void) ;
    int *g(void) ;

    //数组型
    char str[]="hello";
    printf("%zu\n",sizeof(str));        //输出6   含有'\0'（字符串结束符/空位符）                 'h''e''l''l''o''\0'
    printf("%zu\n",strlen(str));        //输出5   只计算了原字符串
    
    //指针型
    char *s="hello";
    printf("%zu\n",sizeof(s));          //输出8
    printf("%zu\n",strlen(s));          //输出5
    
    //对++的判断
    int i=0;
    printf("%d %d\n",i++,i++);
    
    //静态数据研究
    f();                                //输出1
    f();                                //输出2
    f();                                //输出3

/*栈：自动管理，放普通局部变量。
  堆：手动管理，malloc 分配，free 释放。
  全局/静态区：全局变量和 static 变量，程序运行期间一直存在。
  常量区：字符串字面量 "hello" 等，只读。
  代码区：编译后的机器指令。*/
    int *q = g();
    printf("%d\n", *q);
    free(q);  

    return 0;
}

void f(void) {
    static int count = 0;               //静态存储期对象在程序开始执行前就已经初始化完成
    count++;
    printf("%d\n", count);
}

int *g(void) {
    int *p = malloc(sizeof(int));
    *p = 10;
    return p;
}