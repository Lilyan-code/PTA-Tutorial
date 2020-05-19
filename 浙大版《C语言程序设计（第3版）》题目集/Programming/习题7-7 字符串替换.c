#include <stdio.h>
#include <string.h>

char str[100];
char a[100];

int main(void ) {
    int k = 90;
    for (int i = 65; i < 91; i ++) {
        a[i] = (char)k;
        k --;
    }
    fgets(str, 85, stdin);
    int len = strlen(str);
    for (int i = 0; i < len; i ++) 
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = a[(int)str[i]];
    for (int i = 0; i < len; i ++)
        printf("%c", str[i]);
    return 0;
}