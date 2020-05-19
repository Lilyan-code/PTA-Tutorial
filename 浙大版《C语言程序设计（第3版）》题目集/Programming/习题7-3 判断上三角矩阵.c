#include <stdio.h>

int a[11][11];

int judge(int a[11][11], int n) {
    int flag = 1;
    for (int i = 0; i < n; i ++)
        for (int j = 0; j < n; j ++)
            if (i > j && a[i][j] != 0)
                flag = 0;
    return flag;
}

int main(void ) {
    int T, n;
    scanf("%d", &T);
    while (T --) {
        scanf("%d", &n);
        for (int i = 0; i < n; i ++)
            for (int j = 0; j < n; j ++)
                scanf("%d", &a[i][j]);
        if (judge(a, n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}