//
// Created by Acmer_ly on 2020/3/11.
//练习2-11 计算分段函数[2] (10分)
#include <stdio.h>
#include <math.h>
const double eps = 1e-6;

double f(double x) {
    if (x == 0) return 0;
    if (x >= eps) {
        return pow(x,0.5);
    } else {
        return (pow(x + 1, 2) + 2 * x + (double)1 / x );
    }
}

int main(void) {
    double input;
    scanf("%lf", &input);
    printf("f(%.2lf) = %.2lf\n", input, f(input));
    return 0;
}

