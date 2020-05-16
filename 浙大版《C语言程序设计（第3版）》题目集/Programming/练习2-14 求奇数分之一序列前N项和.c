//
// Created by Acmer_ly on 2020/3/12.
//练习2-14 求奇数分之一序列前N项和 (15分)
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    double sum = 0;
    int j = 1;
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / (double)j;
        j += 2;
    }
    printf("sum = %.6lf\n", sum);
    return 0;
}
