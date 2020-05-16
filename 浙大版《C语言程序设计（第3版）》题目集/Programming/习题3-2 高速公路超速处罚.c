//
// Created by Acmer_ly on 2020/3/13.
//习题3-2 高速公路超速处罚 (15分)

#include <stdio.h>
#include <math.h>

int main(void) {
    int speed;
    int limit_speed;
    scanf("%d%d", &speed, &limit_speed);
    double x = 100 * fabs(limit_speed - speed) / limit_speed;
    if (x >= 10 && x < 50) {
        printf("Exceed %.0lf%%. Ticket 200\n", x);
    } else if (x >= 50) {
        printf("Exceed %.0lf%%. License Revoked\n", x);
    } else if (x < 10){
        printf("OK\n");
    }
    return 0;
}

