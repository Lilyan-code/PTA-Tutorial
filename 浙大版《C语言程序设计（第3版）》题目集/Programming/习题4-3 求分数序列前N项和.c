//
// Created by Acmer_ly on 2020/3/14.
//习题4-3 求分数序列前N项和 (15分)

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double sum = 0;
    double last_f = 2, last_d = 1;
    for (int i = 1; i <= n; i ++) {
        sum += last_f / last_d;
        double temp = last_f;
        last_f = last_d + last_f;
        last_d = temp;
    }
    printf("%.2lf\n", sum);
    return 0;
}

