//
// Created by Acmer_ly on 2020/3/14.
//习题4-10 猴子吃桃问题 (15分)
#include <stdio.h>
int f(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}

int f(int n) {
    if (n == 1) {
        return 1;
    }
    return (f(n - 1) + 1) * 2 ;
}


