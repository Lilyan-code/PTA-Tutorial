bool palindrome( char *s ) {
    int len = strlen(s);
    int i;
    int j;
    for (i = 0, j = len - 1; i < j; i ++, j --) {
        if (s[i] != s[j]) return false;
    }

    return true;
}