//
// Created by Acmer_ly on 2020/3/12.
//习题2-4 求交错序列前N项和 (15分)

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double sum = 0;
    int j = 1;
    for (int i = 1; i <= n; i ++) {
        if (i % 2 == 0) {
             sum -= (double)i / (double)j;
        } else {
            sum += (double)i / (double)j;
        }
        j += 2;
    }
    printf("%.3lf\n", sum);
    return 0;
}
