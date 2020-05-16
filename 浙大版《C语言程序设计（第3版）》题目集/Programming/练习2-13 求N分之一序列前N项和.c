//
// Created by Acmer_ly on 2020/3/12.
//练习2-13 求N分之一序列前N项和 (15分)


#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    double sum = 0;
    for (int i = 1; i <= N; i ++) {
        sum += (double)1 / (double)i;
    }
    printf("sum = %.6lf\n", sum);
    return 0;
}