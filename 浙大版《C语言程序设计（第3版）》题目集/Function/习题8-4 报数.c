void CountOff( int n, int m, int out[] ) {
    int front = 0, rear = 0;
	int que[MAXN];
	for (int i = 1; i <= n; i ++) {
		que[rear] = i;
		rear ++;
	} 
	//printf("%d\n", rear); 
	rear--;
	int cur = 1, cnt = 0;
	while (cnt < n) {
	//	printf("%d\n", cnt);
		int x = que[front];
		front = (front + 1) % n;
		if (cur == m) {
			cur = 1;
			out[x - 1] = ++cnt;
		} else {
			cur ++;
			rear = (rear + 1) % n;
			que[rear] = x;
		}
	}
	
	//printf("%d\n", que[front]);
}