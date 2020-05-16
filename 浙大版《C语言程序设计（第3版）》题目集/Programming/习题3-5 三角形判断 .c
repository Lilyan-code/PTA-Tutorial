//
// Created by Acmer_ly on 2020/3/13.
//习题3-5 三角形判断 (15分)
#include <stdio.h>
#include <math.h>

int main(void) {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double l1;
    double l2;
    double l3;
    double L = 0;
    double Area = 0;
    l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    l2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    l3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    if ((l1 + l2) > l3 && (l1 + l3) > l2 && (l2 + l3) > l1) {
        L = l1 + l2 + l3;
        double s = (l1 + l2 + l3) / 2;
        Area = sqrt(s * (s - l1) * (s - l2) * (s - l3));
        printf("L = %.2lf, A = %.2lf\n", L, Area);
    } else {
        printf("Impossible\n");
    }
    return 0;
}

