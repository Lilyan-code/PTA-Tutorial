//
// Created by Acmer_ly on 2020/3/12.
//习题2-3 求平方与倒数序列的部分和 (15分)
#include <stdio.h>

int main(void) {
    int m;
    int n;
    scanf("%d%d", &m, &n);
    double sum = 0;
    for (int i = m; i <= n; i ++) {
        sum += i * i;
        sum += 1.0 / (double)i;
    }
    printf("sum = %.6lf\n", sum);
    return 0;
}

