#include <stdio.h>
#include <string.h>

char str[85];
char c[10];

int main(void ) {
    gets(c);
    gets(str);
    int len = strlen(str);
    int index = -1;
    for (int i = len - 1; i >= 0; i --)
        if (str[i] == c[0]) {
            index = i;
            break;
        }
    if (index != -1)
        printf("index = %d\n", index);
    else 
        printf("Not Found\n");
    return 0;
}