#include <stdio.h>

int main(void) {
    int h, m, s, t;
    scanf("%d:%d:%d", &h,&m,&s);
    scanf("%d", &t);
    if (s + t >= 60) {
        m ++;
        if (m >= 60) {
            h ++;
            m = 0;
        }
            
        if (h >= 24) {
            h = 0;
        }
            
        s = s + t - 60;
    } else {
        s = s + t;
    }
    if (h >= 10 && m >= 10 && s >= 10) {
        printf("%d:%d:%d\n", h, m, s);
    } else if (h >= 10 && m >= 10 && s < 10) {
        printf("%d:%d:0%d\n", h, m, s);
    } else if (h >= 10 && m < 10 && s >= 10) {
        printf("%d:0%d:%d\n", h, m, s);
    } else if (h < 10 && m >= 10 && s >= 10) {
        printf("0%d:%d:%d\n", h, m, s);
    } else if (h >= 10 && m < 10 && s < 10) {
        printf("%d:0%d:0%d\n", h, m, s);
    } else if (h < 10 && m >= 10 && s < 10) {
        printf("0%d:%d:0%d\n", h, m, s);
    } else if (h < 10 && m < 10 && s >= 10) {
        printf("0%d:0%d:%d\n", h, m, s);
    } else if (h < 10 && m < 10 && s < 10) {
        printf("0%d:0%d:0%d\n", h, m, s);
    } 
    
    return 0;
}