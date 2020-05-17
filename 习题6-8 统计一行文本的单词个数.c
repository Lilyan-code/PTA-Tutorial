#include <stdio.h>
#include <string.h>
char str[10000];
int main(void ) {
    gets(str);
    int len = strlen(str);
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < len; i ++) {
        if (str[i] ==           ' ') {
            if (str[i - 1] != ' ' && i > 0)
                ans ++;
            cnt = i;
        }
    }
    if (cnt != len - 1) cnt ++;
    if (str[cnt] != ' ') ans ++;
    printf("%d\n", ans);
    return 0;
}