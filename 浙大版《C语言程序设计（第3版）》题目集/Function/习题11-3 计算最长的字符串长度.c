int max_len( char *s[], int n ) {
    int max = -1;
    int len;
    for (int i = 0; i < n; i ++) {
        len = strlen(s[i]);
        if (len > max) {
            max = len;
        }
    }
    return max;
}
