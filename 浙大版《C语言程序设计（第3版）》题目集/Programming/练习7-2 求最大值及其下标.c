#include <stdio.h>

int a[11];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
        scanf("%d", a + i);
    int max = -9999999;
    int index = 0;
    for (int i = 0; i < n; i ++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    printf("%d %d\n", max, index);
    return 0;
}