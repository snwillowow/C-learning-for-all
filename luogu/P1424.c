//P1424
#include <stdio.h>
int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    int weeks = n / 7;          // 完整周数
    int rem = n % 7;            // 剩余天数
    int work_days = weeks * 5;  // 完整周的工作日

    // 处理剩余的天  
    for (int i = 0; i < rem; i++) {
        if (x <= 5) {           // 周一到周五是工作日
            work_days++;
        }
        x++;
        if (x > 7) x = 1;       // 星期循环
    }

    printf("%d", work_days * 250);
    return 0;
}