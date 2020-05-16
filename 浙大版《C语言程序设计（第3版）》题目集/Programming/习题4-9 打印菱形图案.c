//
// Created by Acmer_ly on 2020/3/14.
//习题4-9 打印菱形图案 (15分)

#include <stdio.h>

int main(void) {
    int n;
    int m = 1;
    scanf("%d", &n);
    for (int i = n - 1; i > 0; i -= 2) {
        for (int j = 1; j <= i; j ++) {
            printf(" ");
        }
        for (int k = 1; k <= m; k ++) {
            printf("* ");
        }
        m += 2;
        printf("\n");
    }
    for (int i = 1; i <= n; i ++) {
        printf("* ");
    }
    printf("\n");
    m -= 2;
    for (int i = 2; i <= n - 1; i += 2) {
        for (int j = 1; j <= i; j ++) {
            printf(" ");
        }
        for (int k = 1; k <= m; k ++) {
            printf("* ");
        }
        m -= 2;
        printf("\n");
    }
    return 0;
}

