char *str_cat( char *s, char *t ) {
    int lens = strlen(s);
    int lent = strlen(t);
    char *str;
    int index = lens;
    for (int i = 0; i < lent; i ++) {
        s[index ++] = t[i];
    }
   str = s;
    return str;
}