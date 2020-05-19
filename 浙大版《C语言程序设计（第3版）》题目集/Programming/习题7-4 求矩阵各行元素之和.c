#include <stdio.h>

int a[7][7];
int ans[7];

int main(void ) {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i ++)
        for (int j = 0; j < n; j ++)
            scanf("%d", &a[i][j]);
    int cnt = 0;
    for (int i = 0; i < m; i ++) {
        int temp = 0;
        for (int j = 0; j < n; j ++) {
            temp += a[i][j];
        }
        ans[cnt ++] = temp;
    }
    for (int i = 0; i < cnt; i ++)
        printf("%d\n", ans[i]);
    return 0;
}