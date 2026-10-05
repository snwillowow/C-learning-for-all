#include <stdio.h>

long long count_selections(int max_value, int left, int rest)
{
    // 成功选完
    if (left == 0)
    {
        return rest == 0 ? 1 : 0;
    }

    // 剪枝：剩余和小于 0，或没有可选数，或需要选的个数超过可选数的个数
    if (rest < 0 || max_value <= 0 || left > max_value)
    {
        return 0;
    }

    // 计算当前可选范围（1..max_value）中选 left 个数的最小和与最大和，用于进一步剪枝
    int min_sum = left * (left + 1) / 2;
    int max_sum = left * (2 * max_value - left + 1) / 2;
    if (rest < min_sum || rest > max_sum)
    {
        return 0;
    }

    // 情况1：选择 max_value
    long long choose = count_selections(max_value - 1, left - 1, rest - max_value);
    // 情况2：不选 max_value
    long long not_choose = count_selections(max_value - 1, left, rest);

    return choose + not_choose;
}

int main(void)
{
    int n, k, target;
    if (scanf("%d %d %d", &n, &k, &target) != 3)
    {
        return 1;
    }

    long long result = count_selections(n, k, target);
    printf("%lld\n", result);
    return 0;
}