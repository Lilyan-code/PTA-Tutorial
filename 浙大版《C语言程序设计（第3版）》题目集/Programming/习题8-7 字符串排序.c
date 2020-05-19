#include <stdio.h>
#include <string.h>

char str[5][85];
char tmp[85];

int main(void) {
    for (int i = 0; i < 5; i ++) {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < 5; i ++) {
        for (int j = i + 1; j < 5; j ++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(tmp, str[j]);
                strcpy(str[j], str[i]);
                strcpy(str[i], tmp);
            }
                
        }
    }
    printf("After sorted:\n");
    for (int i = 0; i < 5; i ++)
        printf("%s\n", str[i]);
    return 0;
}