#include <stdio.h>
#include <string.h>
struct book{
    double price;
    char name[35];
};
char max_name[35];
char min_name[35];

int main(void) {
    int n;
    scanf("%d", &n);
    double maxPrice = -1.00;
    double minPrice = 999999.00;
    struct book b[11];
    for (int i = 0; i < n; i ++) {
        scanf("\n");
        fgets(b[i].name, 35, stdin);
        scanf("%lf", &b[i].price);
        if (b[i].price > maxPrice) {
            maxPrice = b[i].price;
            strcpy(max_name, b[i].name);
        }
        if (b[i].price < minPrice) {
            minPrice = b[i].price;
            strcpy(min_name, b[i].name);
        }
    }
    printf("%.2lf, %s", maxPrice, max_name);
    printf("%.2lf, %s", minPrice, min_name);
    return 0;
}