void delchar( char *str, char c ) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i ++) len++;
    for (int i = len - 1; i >= 0; i --) {
        if (str[i] == c) {
            for (int j = i; j < MAXN; j ++) {
                str[j] = str[j + 1];
            }
        }
    }
}