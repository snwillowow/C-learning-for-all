#include <stdio.h>

// 判断是否为2月
// 再判断是否为闰年
int check_year(int y, int m)
{
    if (m == 2)
        return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ? 29 : 28;
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    else
        return 30;
}

int main()
{

    // 获取两个整数分别作为年和月，以及限制y在1583-2020之间，m在12之内
    int y, m;
    if (scanf("%d %d", &y, &m) != 2)
        return 0;
    if (y < 1583 || y > 2020 || m < 0 || m > 12)
        return 0;
    printf("%d", check_year(y, m));
    return 0;
}