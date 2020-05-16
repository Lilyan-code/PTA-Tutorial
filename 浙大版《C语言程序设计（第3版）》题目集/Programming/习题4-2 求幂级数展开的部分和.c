//
// Created by Acmer_ly on 2020/3/14.
//习题4-2 求幂级数展开的部分和 (20分)
#include <stdio.h>
#include <math.h>
const double eps = 0.00001;
double fact(int n);

int main(void) {
    double x;
    scanf("%lf", &x);
    double sum = 0;
    for (int i = 0; ; i ++) {
        double ans = pow(x, i) / fact(i);
        sum += ans;
        if (fabs(ans) < eps) {
            break;
        }
    }
    printf("%.4lf\n", sum);
    return 0;
}

double fact(int n) {
    if (n == 0) {
        return 1;
    }
    return fact(n - 1) * n;
}