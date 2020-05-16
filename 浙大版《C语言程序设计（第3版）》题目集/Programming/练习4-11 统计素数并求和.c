//
// Created by Acmer_ly on 2020/3/14.
//练习4-11 统计素数并求和 (20分)
#include <stdio.h>
int isPrime(int n);

int main(void) {
    int m, n;
    scanf("%d%d", &m, &n);
    int cnt = 0, sum = 0;
    for (int i = m; i <= n; i ++) {
        if (isPrime(i)) {
            cnt ++;
            sum += i;
           // printf("%d\n", i);
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}

int isPrime(int n) {
    if (n == 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i ++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}