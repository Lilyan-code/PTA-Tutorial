void strmcpy( char *t, int m, char *s ) {
    int len = m;
    for (int i = m; t[i] != '\0'; i ++) {
        len ++;
    }
    int cnt = 0;
    for (int i = m - 1; i < len; i ++) {
        s[cnt++] = t[i];
    }
    s[cnt] = '\0';
}