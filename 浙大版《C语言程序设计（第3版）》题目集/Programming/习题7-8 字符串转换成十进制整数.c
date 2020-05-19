#include <stdio.h>
#include <string.h>
typedef long long ll;

char str[1005];
char tmp[1005];
int num[1005];

ll power(int a, int b) {
    ll tmp = 1;
    for (int i = 0; i < b; i ++)
        tmp *= a;
    return tmp;
}

int main(void) {
    fgets(str, 10005, stdin);
    int len = 0;
    for (int i = 0; str[i] != '#'; i ++)
        len ++;
    int index = -1, index1 = -1;
    for (int i = 0; i < len; i ++) {
        if (str[i] == '-') {
            index = i;
            break;
        }
    }
    for (int i = 0; i < len; i ++) {
        if ((str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= '0' && str[i] <= '9')) {
            index1 = i;
            break;
        }
    }
    int cnt = 0;
    for (int i = 0; i < len; i ++) {
        if ((str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= '0' && str[i] <= '9')) {
            tmp[cnt ++] = str[i];
        }
    }
    for (int i = 0; i < cnt; i ++) {
            if (tmp[i] >= '0' && tmp[i] <= '9') {
                num[i] = tmp[i] - '0';
            } else if (tmp[i] == 'A' || tmp[i] == 'a') {
                num[i] = 10;
            } else if (tmp[i] == 'B' || tmp[i] == 'b') {
                num[i] = 11;
            } else if (tmp[i] == 'C' || tmp[i] == 'c') {
                num[i] = 12;
            } else if (tmp[i] == 'D' || tmp[i] == 'd') {
                num[i] = 13;
            } else if (tmp[i] == 'E' || tmp[i] == 'e') {
                num[i] = 14;
            } else if (tmp[i] == 'F' || tmp[i] == 'f') {
                num[i] = 15;
            }
    }
    ll ans = 0;
    for (int i = cnt - 1, j = 0; i >= 0; i --, j ++) {
        ans += num[i] * power(16, j);
    }
    if (index < index1) {
        printf("-%lld\n", ans);
        
    } else {
        printf("%lld\n", ans);
    }
    return 0;
}