#include <stdio.h>

// 高精度乘法并且记录
void Highprecision_multiplication(int *fact, int *len_array, int j)
{
    int i;
    int carry = 0;
    for (i = 0; i < *len_array; i++)
    {
        int temp = fact[i] * (j + 1) + carry;
        fact[i] = temp % 10;
        carry = temp / 10;
    }
    while (carry > 0)
    {
        fact[*len_array] = carry % 10;
        carry /= 10;
        (*len_array)++;
    }
}

// 高精度加法
void Highprecision_addition(int *len_sum, int len_array, int *fact, int *sum)
{
    int carry = 0;
    int i;
    int max_len = *len_sum > len_array ? *len_sum : len_array;
    for (i = 0; i < max_len; i++)
    {
        int a = (i < len_array) ? fact[i] : 0;
        int b = (i < *len_sum) ? sum[i] : 0;
        int temp = a + b + carry;

        sum[i] = temp % 10;
        carry = temp / 10;
    }
    while (carry > 0)
    {
        sum[*len_sum] = carry % 10;
        carry /= 10;
        (*len_sum)++;
    }
    *len_sum = (max_len > *len_sum) ? max_len : *len_sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int fact[100] = {1};
    int sum[100] = {0};

    int len_array = 1;
    int len_sum = 0;
    int j;
    for (j = 0; j < n; j++)
    {
        Highprecision_multiplication(fact, &len_array, j);
        Highprecision_addition(&len_sum, len_array, fact, sum);
    }

    // 打印
    for (j = len_sum - 1; j >= 0; j--)
    {
        printf("%d", sum[j]);
    }
    printf("\n");
    return 0;
}