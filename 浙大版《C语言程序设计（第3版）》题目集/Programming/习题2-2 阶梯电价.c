//
// Created by Acmer_ly on 2020/3/12.
//习题2-2 阶梯电价 (15分)
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double cost = 0;
    if (n < 0) {
        printf("Invalid Value!\n");
    } else {
        if (n <= 50) {
            cost += n * 0.53;
            printf("cost = %.2lf\n", cost);
        } else {
            cost += 50 * 0.53;
            cost += (n - 50) * 0.58;
            printf("cost = %.2lf\n", cost);
        }
    }
    return 0;
}

