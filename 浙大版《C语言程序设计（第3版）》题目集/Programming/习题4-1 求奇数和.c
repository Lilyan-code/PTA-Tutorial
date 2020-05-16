//
// Created by Acmer_ly on 2020/3/14.
//

#include <stdio.h>

int main(void) {
    int x;
    int sum = 0;
    while (1) {
        scanf("%d", &x);
        if (x <= 0) {
            break;
        }
        if (x & 1) {
            sum += x;
        }

    }
    printf("%d\n", sum);
    return 0;
}