#include <stdio.h>
#include <math.h>

#define accurate 0.05
// a + b = (x + x', y + y')

int main(void) {
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    double ans1 = x1 + x2;
    double ans2 = y1 + y2;
    if (fabs(ans1) < accurate) ans1 = 0.0;
    if (fabs(ans2) < accurate) ans2 = 0.0;
    printf("(%.1lf, %.1lf)", ans1, ans2);
    return 0;
}