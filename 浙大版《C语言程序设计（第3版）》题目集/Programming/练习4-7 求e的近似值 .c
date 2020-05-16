//
// Created by Acmer_ly on 2020/3/14.
//练习4-7 求e的近似值 (15分)
#include <stdio.h>
double fact(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    double sum = 1;
    for (int i = 1; i <= n; i ++) {
        sum += 1.0 / fact(i);
    }
    printf("%.8lf\n", sum);
    return 0;
}

double fact(int n) {
    if (n == 0) {
        return 1;
    }
    return fact(n - 1) * n;
}


