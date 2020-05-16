//
// Created by Acmer_ly on 2020/3/12.
//练习2-17 生成3的乘方表 (15分)
#include <stdio.h>
long power(int a, int b);

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i ++) {
        printf("pow(3,%d) = %ld\n", i, power(3, i));
    }
    return 0;
}

long power(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    return power(a, b - 1) * a;
}
