//
// Created by Acmer_ly on 2020/3/14.
//练习4-10 找出最小值 (20分)
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    int x;
    scanf("%d", &n);
    int min = INT_MAX;
    for (int i = 0; i < n; i ++) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
        }
    }
    printf("min = %d\n", min);
    return 0;
}

