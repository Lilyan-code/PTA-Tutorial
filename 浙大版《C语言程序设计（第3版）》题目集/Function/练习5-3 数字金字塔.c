void pyramid( int n ) {
    int cnt = 1;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n - i; j ++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k ++) {
            printf("%d ", i);
        }

        printf("\n");
    }
}