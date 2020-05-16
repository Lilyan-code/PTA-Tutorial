//
// Created by Acmer_ly on 2020/3/14.
//练习4-3 求给定精度的简单交错序列部分和 (15分)
#include <stdio.h>
#include <math.h>

int main(void) {
    double eps;
    scanf("%lf", &eps);
    double sum = 0;
    int d = 1;
    double ans = 0;
    for (int i = 1; ; i ++) {
        ans = 1.0 / (double) d;
        if (i % 2 == 0) {
            sum -= ans;
        } else {
            sum += ans;
        }
        d += 3;
        if (fabs(ans) <= eps) {
            break;
        }
    }
    printf("sum = %.6lf\n", sum);
    return 0;
}

