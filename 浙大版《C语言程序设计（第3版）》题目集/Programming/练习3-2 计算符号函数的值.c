//
// Created by Acmer_ly on 2020/3/13.
//练习3-2 计算符号函数的值 (10分)
#include <stdio.h>
int sign(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("sign(%d) = %d\n", n, sign(n));
    return 0;
}

int sign(int n) {
    if (n < 0 ) {
        return -1;
    } else if (n == 0) {
        return 0;
    } else {
        return 1;
    }
}
