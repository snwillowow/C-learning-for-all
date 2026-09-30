#include <stdio.h>

void f(int a[], int n) {                                         //数组做函数名会自动退化为指针
    for (int i = 0; i < n; i++) {
        a[i] = a[i] * 2;
    }
}

int main(void) {
    int arr[3] = {1, 2, 3};
    f(arr, 3);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    return 0;
}