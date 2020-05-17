#include <stdio.h>

int a[11];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
        scanf("%d", a + i);
    for (int i = n - 1; i >= 0; i --) {
        if (i == 0) {
            printf("%d\n", a[i]);
        }else {
            printf("%d ", a[i]);
        }
    }
    return 0;
}