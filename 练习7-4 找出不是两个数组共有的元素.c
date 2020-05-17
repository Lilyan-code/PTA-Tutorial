#include <stdio.h>

int a[25], b[25], c[55];

int main(void ) {
    int m, n;
    scanf("%d", &m);
    for (int i = 0; i < m; i ++)
        scanf("%d", a + i);
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) 
        scanf("%d", b + i);
    int index = 0;
    for (int i = 0; i < m; i ++) {
        int cnt = 0;
        for (int j = 0; j < n; j ++) {
            if (a[i] != b[j]) cnt ++;
        }
        if (cnt == n) {
            c[index ++] = a[i];
        }
    }
    for (int i = 0; i < n; i ++) {
        int cnt = 0;
        for (int j = 0; j < m; j ++) {
            if (b[i] != a[j]) cnt ++;
        }
        if (cnt == m) {
            c[index ++] = b[i];
        }
    }
    
    for (int i = 0; i < index; i ++) {
        for (int j = i + 1; j < index; j ++) {
            if (c[i] == c[j]) c[j] = 9999999;
        }
    }
    for (int i = 0; i < index; i ++)
        if (c[i] != 9999999) 
            if (i != index - 1)
                if (c[i + 1] == 9999999 && i + 1 == index - 1)
                    printf("%d\n", c[i]);
                else 
                    printf("%d ", c[i]);
            else
                printf("%d\n", c[i]);
    return 0;
}