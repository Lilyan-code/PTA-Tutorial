//
// Created by Acmer_ly on 2020/3/12.
//习题2-6 求阶乘序列前N项和 (15分)

#include <stdio.h>
int fact(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i ++) {
        sum += fact(i);
    }
    printf("%d\n", sum);
    return  0;
}

int fact(int n) {
    if (n == 1) return 1;
    return fact(n - 1) * n;
}

