#include <stdio.h>

int a[10001];

int main(void) {
    int n;
    int max = -9999999, min = 9999999, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", a + i);
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
        sum += a[i];
    }
    double average = (double)sum / (double)n;
    printf("average = %.2lf\n", average);
    printf("max = %.2lf\n", (double)max);
    printf("min = %.2lf\n", (double)min);
    return 0;
}