//
// Created by Acmer_ly on 2020/3/13.
//习题3-3 出租车计价 (15分)
/*
 *  本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：

    起步里程为3公里，起步费10元；
    超起步里程后10公里内，每公里2元；
    超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
    营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。
 */
#include <stdio.h>
#include <math.h>
const double eps = 1e-8;

int main(void) {
    double s;
    int t;
    scanf("%lf%d", &s, &t);
    int moneyt = 0;
    moneyt = t / 5;
    moneyt *= 2;
    double moneys = 0;
    if (s < 3) {
        moneys += 10;
    } else if (s >= 3 && s < 10) {
        moneys = 10;
        moneys += (s - 3) * 2;
    } else {
        moneys = 24;
        moneys += (s - 10) * 3;
    }
    printf("%d\n", moneyt + (int)round(moneys));
    return 0;
}

