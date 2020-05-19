#include <stdio.h>
#include <string.h>

char str[100];

int main(void) {
    fgets(str, 85, stdin);
    int len = strlen(str);
    int ans = 0;
    for (int i = 0; i < len; i ++) {
        if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && (str[i] >= 'A' && str[i] <= 'Z')) 
            ans ++;
    }
    printf("%d\n", ans);
    return 0;
}