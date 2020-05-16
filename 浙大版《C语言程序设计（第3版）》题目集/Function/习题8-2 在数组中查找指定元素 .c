int search( int list[], int n, int x ) {
    for (int i = 0; i <= n- 1; i ++) {
        if (list[i] == x) return i;
    }
    return -1;
}