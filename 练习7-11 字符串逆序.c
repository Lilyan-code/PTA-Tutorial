#include <stdio.h>
#include <string.h>

char str[85];

int main(void) {
    gets(str);
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i --)
        printf("%c", str[i]);
    return 0;
}