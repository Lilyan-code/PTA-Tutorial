//
// Created by Acmer_ly on 2020/3/12.
//习题2-5 求平方根序列前N项和 (15分)
#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i ++) {
        sum += sqrt(i);
    }
    printf("sum = %.2lf\n", sum);
    return 0;
}

