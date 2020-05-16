//
// Created by Acmer_ly on 2020/3/14.
//习题4-7 最大公约数和最小公倍数 (15分)
#include <stdio.h>
int gcd(int m, int n);
int lcm(int m, int n);

int main(void) {
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d %d\n", gcd(m, n), lcm(m, n));
    return 0;
}

int gcd(int m, int n) {
    if (n == 0) return m;
    return gcd(n, m % n);
}
int lcm(int m, int n) {
    return (m * n) / gcd(m, n);
}

