//
// Created by Acmer_ly on 2020/3/12.
//练习2-18 求组合数 (15分)
#include <stdio.h>
double fact(int n);

int main(void) {
    int m;
    int n;
    scanf("%d%d", &m, &n);
    double result;
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result = %ld\n", (long)result);
    return 0;
}

double fact(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return fact(n - 1) * n;
}

