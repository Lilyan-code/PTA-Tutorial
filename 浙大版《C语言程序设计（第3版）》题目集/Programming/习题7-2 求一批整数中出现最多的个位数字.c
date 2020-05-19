#include <stdio.h>

int a[1005];
int num[11];
int ans[11];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
        scanf("%d", a + i);
    for (int i = 0; i < n; i ++) {
        int temp = a[i];
        while (temp) {
            num[temp %10] ++;
            temp /= 10;
        }
    }
    int max = -1;
    int cnt = 0;
    for (int i = 0; i < 10; i ++) {
        if (num[i] >= max) {
            max = num[i];
        }
            
    }
    printf("%d: ", max);
    for (int i = 0; i < 10; i ++) {
        if (num[i] == max) {
            ans[cnt ++] = i;
        }
    }
    for (int i = 0; i < cnt; i ++)
        if (i != cnt - 1)
            printf("%d ", ans[i]);
        else
            printf("%d\n", ans[i]);
    return 0;
}