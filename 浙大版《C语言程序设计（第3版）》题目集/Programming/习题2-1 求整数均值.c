//
// Created by Acmer_ly on 2020/3/12.
//习题2-1 求整数均值 (10分)
#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    int d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int sum = 0;
    double avg = 0;
    sum = a + b + c + d;
    avg = (double)(sum) / 4.0;
    printf("Sum = %d; Average = %.1lf\n", sum, avg);
    return 0;
}

