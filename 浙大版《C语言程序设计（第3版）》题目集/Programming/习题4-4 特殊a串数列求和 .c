//
// Created by Acmer_ly on 2020/3/14.
//习题4-4 特殊a串数列求和 (20分)
#include <stdio.h>
#include <limits.h>

int main(void) {
    int a, n;
    scanf("%d%d", &a, &n);
    int sum = 0;
    int temp = a;
    for (int i = 0; i < n; i ++) {
        sum += a;
        a = a * 10 + temp;
    }
    printf("s = %d\n", sum);
    return 0;
}

