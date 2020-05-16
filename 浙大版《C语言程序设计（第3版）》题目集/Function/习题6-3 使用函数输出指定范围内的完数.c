int factorsum( int number ) {
    if (number == 1) {
        return 1;
    }
    int sum = 0;
    for (int i = 1; i <= number / 2; i ++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}
void PrintPN( int m, int n ) {
    int cnt = 0;
    for (int i = m ; i <= n; i ++) {
        if (factorsum(i) == i) {
            cnt ++;
            if (i == 1) {
                printf("%d = %d", i, i);
            } else {
                printf("%d = ", i);
                for (int j = 1; ; j ++) {
                    if (j >= i / 2) {
                        printf("%d", j);
                        break;
                    }
                    if (i % j == 0) {
                        printf("%d + ", j);
                    } 
                }
            }
            printf("\n");   
        }
    }
    if (cnt == 0) {
        printf("No perfect number\n");
    }
}